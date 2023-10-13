// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EncryptionContextOpenSSL.h"

enum class KeyPairType
{
	Ed25519,
	X25519
};

struct FCipher
{
	static bool EncryptWithKey(const TArrayView<const uint8_t> Key, FString const& Data, 
		FString& OutEncryptedData);

	static bool DecryptWithKey(const TArrayView<const uint8_t> Key, FString const& EncryptedData,
		FString& DecryptedData);

	static FString DigestKey(const TArrayView<const uint8_t> KeyRaw);

	static void GetKeyPair(KeyPairType PairType, TArray<uint8>& OutPublicKey, TArray<uint8>& OutPrivateKey);

	static FString EncodeBase58(FString const& Source);

	static FString Sign(FString const& Message, const TArrayView<const uint8_t> PrivateKey);

	static FString ExchangeKeys(const TArrayView<const uint8_t> PrivateKey, FString const& PeerPublicKey);
};
