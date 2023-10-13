// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#include "Cipher.h"

#include "Misc/Base64.h"

#define UI UI_ST
THIRD_PARTY_INCLUDES_START
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/bn.h>
#include <openssl/rand.h>
#include <openssl/kdf.h>
THIRD_PARTY_INCLUDES_END
#undef UI

bool FCipher::EncryptWithKey(const TArrayView<const uint8_t> Key, FString const& Data,
	FString& OutEncryptedData)
{
	std::string DataUtf8 = std::string(TCHAR_TO_UTF8(*Data));

	size_t ChachaBlockSize = EVP_CIPHER_block_size(EVP_chacha20_poly1305());

	TArray<uint8_t> CipherText;
	CipherText.SetNum(DataUtf8.length() + ChachaBlockSize);

	TArray<uint8_t> Nonce;
	Nonce.SetNum(12);

	TArray<uint8_t> Tag;
	Tag.SetNum(16);

	RAND_bytes(Nonce.GetData(), 12);

	EVP_CIPHER_CTX* Context = EVP_CIPHER_CTX_new();

	int Result = EVP_EncryptInit_ex(Context, EVP_chacha20_poly1305(), nullptr, 
		Key.GetData(), Nonce.GetData());
	ensure(Result);

	int OutCipherTextLength;

	Result = EVP_EncryptUpdate(Context, CipherText.GetData(), 
		&OutCipherTextLength, (unsigned char*)DataUtf8.c_str(), DataUtf8.length());
	ensure(Result);

	int tmp = 0;
	Result = EVP_EncryptFinal_ex(Context, CipherText.GetData() + OutCipherTextLength, &tmp);
	ensure(Result);

	Result = EVP_CIPHER_CTX_ctrl(Context, EVP_CTRL_AEAD_GET_TAG, 
		Tag.Num(), Tag.GetData());
	ensure(Result);

	EVP_CIPHER_CTX_free(Context);

	// Form Data
	size_t EncyptedDataSize = OutCipherTextLength + tmp + 29;

	static TArray<uint8_t> EncryptedDataRaw;
	EncryptedDataRaw.SetNum(EncyptedDataSize);

	EncryptedDataRaw[0] = 0;

	memcpy(EncryptedDataRaw.GetData() + 1, Nonce.GetData(), Nonce.Num());

	memcpy(EncryptedDataRaw.GetData() + 1 + Nonce.Num(), 
		CipherText.GetData(), OutCipherTextLength + tmp);

	memcpy(EncryptedDataRaw.GetData() + 1 + Nonce.Num() + OutCipherTextLength + tmp,
		Tag.GetData(), Tag.Num());

	OutEncryptedData = FBase64::Encode(EncryptedDataRaw.GetData(), EncryptedDataRaw.Num());

	return true;
}

bool FCipher::DecryptWithKey(const TArrayView<const uint8_t> Key, FString const& EncryptedData,
	FString& OutDecryptedData)
{
	TArray<uint8_t> Data;
	TArray<uint8_t> OutResult;
	TArray<uint8_t> Tag;
	TArray<uint8_t> Nonce;

	int DecodedDataSize = FBase64::GetDecodedDataSize(EncryptedData);

	Data.SetNum(DecodedDataSize);
	OutResult.SetNum(DecodedDataSize);
	Nonce.SetNum(12);
	Tag.SetNum(16);

	FBase64::Decode(*EncryptedData, EncryptedData.Len(), Data.GetData());

	memcpy(Nonce.GetData(), Data.GetData() + 1, Nonce.Num());
	memcpy(OutResult.GetData(), Data.GetData() + 1 + Nonce.Num(), OutResult.Num());
	memcpy(Tag.GetData(), Data.GetData() + DecodedDataSize - Tag.Num(), Tag.Num());

	int OutLen;
	int FixedPartSize = Nonce.Num() + Tag.Num() + 1;
	int DecryptedDataSize = DecodedDataSize - FixedPartSize;

	TArray<uint8_t> DecryptedBuffer;
	DecryptedBuffer.SetNum(DecryptedDataSize);

	EVP_CIPHER_CTX* Context = EVP_CIPHER_CTX_new();

	int Result = EVP_DecryptInit_ex(Context, EVP_chacha20_poly1305(), nullptr, 
		Key.GetData(), Nonce.GetData());
	ensure(Result);

	Result = EVP_DecryptUpdate(Context, DecryptedBuffer.GetData(), &OutLen, OutResult.GetData(), 
		DecryptedBuffer.Num());
	ensure(Result);

	int Tmp = 0;
	Result = EVP_DecryptFinal_ex(Context, DecryptedBuffer.GetData() + OutLen, &Tmp);
	ensure(Result);

	EVP_CIPHER_CTX_free(Context);

	FString DecryptedHex = BytesToHex(DecryptedBuffer.GetData(), DecryptedBuffer.Num()).ToLower();

	TArray<uint8> BytesArray;
	BytesArray.SetNum(DecryptedHex.Len() / 2);

	int32 NumBytes = HexToBytes(DecryptedHex, BytesArray.GetData());

	BytesArray.SetNum(NumBytes);

	// Account null termination symbol
	if (BytesArray.Last() != 0)
	{
		BytesArray.Add(0);
		OutDecryptedData = FString(UTF8_TO_TCHAR(BytesArray.GetData()));

		return true;
	}

	OutDecryptedData = FString(UTF8_TO_TCHAR(BytesArray.GetData()));

	return true;
}

FString FCipher::DigestKey(const TArrayView<const uint8_t> KeyRaw)
{
	const EVP_MD* Evp = EVP_sha256();

	EVP_MD_CTX* Context = EVP_MD_CTX_create();

	int Result = EVP_DigestInit(Context, Evp);
	ensure(Result);

	Result = EVP_DigestUpdate(Context, KeyRaw.GetData(), KeyRaw.Num());
	ensure(Result);

	TArray<uint8_t> Bytes;
	Bytes.SetNum(EVP_MAX_MD_SIZE);

	unsigned int BytesLength;

	Result = EVP_DigestFinal(Context, Bytes.GetData(), &BytesLength);
	ensure(Result);

	EVP_MD_CTX_free(Context);

	return BytesToHex(Bytes.GetData(), BytesLength).ToLower();
}

void FCipher::GetKeyPair(KeyPairType PairType, TArray<uint8>& OutPublicKey, TArray<uint8>& OutPrivateKey)
{
	int id = (PairType == KeyPairType::Ed25519) ? EVP_PKEY_ED25519 : EVP_PKEY_X25519;

	EVP_PKEY_CTX* EvpContext = EVP_PKEY_CTX_new_id(id, nullptr);
	EVP_PKEY* GeneratedKeyPair = nullptr;

	EVP_PKEY_keygen_init(EvpContext);
	EVP_PKEY_keygen(EvpContext, &GeneratedKeyPair);

	const size_t KeySize = 32;
	OutPublicKey.SetNumZeroed(KeySize);
	OutPrivateKey.SetNumZeroed(KeySize);

	size_t OutKeySize;

	EVP_PKEY_get_raw_private_key(GeneratedKeyPair, nullptr, &OutKeySize);
	ensure(OutKeySize == KeySize);

	EVP_PKEY_get_raw_public_key(GeneratedKeyPair, nullptr, &OutKeySize);
	ensure(OutKeySize == KeySize);

	EVP_PKEY_get_raw_private_key(GeneratedKeyPair, OutPrivateKey.GetData(), &OutKeySize);
	ensure(OutKeySize == KeySize);

	EVP_PKEY_get_raw_public_key(GeneratedKeyPair, OutPublicKey.GetData(), &OutKeySize);
	ensure(OutKeySize == KeySize);

	EVP_PKEY_free(GeneratedKeyPair);
	EVP_PKEY_CTX_free(EvpContext);
}

FString FCipher::EncodeBase58(FString const& Source)
{
	static const char EncodingAlphabet[58] = 
	{
		'1','2','3','4','5','6','7','8','9','A',
		'B','C','D','E','F','G','H','J','K','L',
		'M','N','P','Q','R','S','T','U','V','W',
		'X','Y','Z','a','b','c','d','e','f','g',
		'h','i','j','k','m','n','o','p','q','r',
		's','t','u','v','w','x','y','z'
	};

	BN_CTX* Context = BN_CTX_new();

	BIGNUM* ResultExp = BN_new();
	BIGNUM* ResultAdd = BN_new();
	BIGNUM* ResultRem = BN_new();

	BIGNUM* Base58 = nullptr;
	BN_dec2bn(&Base58, "58");

	FString Result;
	TArray<int> Array;

	BN_hex2bn(&ResultAdd, TCHAR_TO_ANSI(*Source));

	while (!BN_is_zero(ResultAdd)) 
	{
		BN_div(ResultAdd, ResultRem, ResultAdd, Base58, Context);
		char* Demical = BN_bn2dec(ResultRem);
		Array.Push(atoi(Demical));
	}

	for (int i = Array.Num() - 1; i >= 0; i--) 
	{
		Result = Result + EncodingAlphabet[Array[i]];
	}

	BN_free(ResultAdd);
	BN_free(ResultExp);
	BN_free(ResultRem);

	BN_CTX_free(Context);

	return Result;
}

FString FCipher::Sign(FString const& MessageToSign, const TArrayView<const uint8_t> PrivateKey)
{
	ensure(PrivateKey.Num() == 32);

	FTCHARToUTF8 DataUTF8(*MessageToSign);

	auto MessageToSignView = TArrayView<uint8>((uint8*)DataUTF8.Get(), DataUTF8.Length());

	EVP_MD_CTX* Context = EVP_MD_CTX_new();
	EVP_PKEY* PKey = EVP_PKEY_new_raw_private_key(EVP_PKEY_ED25519, nullptr, 
		PrivateKey.GetData(), PrivateKey.Num());

	int ReturnCode = EVP_DigestSignInit(Context, nullptr, nullptr, nullptr, PKey);
	ensure(ReturnCode != 0);

	size_t SignatureLength = 0;
	ReturnCode = EVP_DigestSign(Context, nullptr, &SignatureLength, 
		MessageToSignView.GetData(), MessageToSignView.Num());
	ensure(ReturnCode != 0);

	TArray<uint8> SignatureArray;
	SignatureArray.SetNum(SignatureLength);

	ReturnCode = EVP_DigestSign(Context, SignatureArray.GetData(), &SignatureLength, 
		MessageToSignView.GetData(), MessageToSignView.Num());
	ensure(ReturnCode != 0);

	EVP_PKEY_free(PKey);
	EVP_MD_CTX_free(Context);

	FString Signature = FBase64::Encode(SignatureArray.GetData(), SignatureArray.Num());

	Signature = Signature.Replace(TEXT("\n"), TEXT(""));
	Signature = Signature.Replace(TEXT("="), TEXT(""));
	Signature = Signature.Replace(TEXT("+"), TEXT("-"));
	Signature = Signature.Replace(TEXT("/"), TEXT("_"));

	return Signature;
}

FString FCipher::ExchangeKeys(const TArrayView<const uint8_t> PrivateKeyRaw, FString const& PeerPublicKey)
{
	EVP_PKEY* PrivateKey = EVP_PKEY_new_raw_private_key(EVP_PKEY_X25519, nullptr,
		PrivateKeyRaw.GetData(), PrivateKeyRaw.Num());

	TArray<uint8_t> PeerPublikKeyRaw;
	PeerPublikKeyRaw.SetNum(32);

	HexToBytes(PeerPublicKey, PeerPublikKeyRaw.GetData());

	EVP_PKEY* PeerKey = EVP_PKEY_new_raw_public_key(EVP_PKEY_X25519, nullptr,
		PeerPublikKeyRaw.GetData(), PeerPublikKeyRaw.Num());

	EVP_PKEY_CTX* Context = EVP_PKEY_CTX_new(PrivateKey, NULL);

	int Result = EVP_PKEY_derive_init(Context);
	ensure(Result);

	Result = EVP_PKEY_derive_set_peer(Context, PeerKey);
	ensure(Result);

	size_t SharedKeyLength;
	Result = EVP_PKEY_derive(Context, nullptr, &SharedKeyLength);
	ensure(Result);

	TArray<uint8_t> SharedKeyRaw;
	SharedKeyRaw.SetNum(SharedKeyLength);

	Result = EVP_PKEY_derive(Context, SharedKeyRaw.GetData(), &SharedKeyLength);
	ensure(Result);

	EVP_PKEY_CTX_free(Context);

	EVP_PKEY_CTX* HkdfContext = EVP_PKEY_CTX_new_id(EVP_PKEY_HKDF, nullptr);

	Result = EVP_PKEY_derive_init(HkdfContext);
	ensure(Result);

	Result = EVP_PKEY_CTX_set_hkdf_md(HkdfContext, EVP_sha256());
	ensure(Result);

	Result = EVP_PKEY_CTX_set1_hkdf_salt(HkdfContext, nullptr, 0);
	ensure(Result);

	Result = EVP_PKEY_CTX_set1_hkdf_key(HkdfContext, SharedKeyRaw.GetData(), SharedKeyLength);
	ensure(Result);

	size_t DeriveKeyLength = 32;
	TArray<uint8_t> DeriveKeyRaw;
	DeriveKeyRaw.SetNum(DeriveKeyLength);

	Result = EVP_PKEY_derive(HkdfContext, DeriveKeyRaw.GetData(), &DeriveKeyLength);
	ensure(Result);

	EVP_PKEY_free(PrivateKey);
	EVP_PKEY_free(PeerKey);
	EVP_PKEY_CTX_free(HkdfContext);

	return BytesToHex(DeriveKeyRaw.GetData(), DeriveKeyRaw.Num()).ToLower();
}
