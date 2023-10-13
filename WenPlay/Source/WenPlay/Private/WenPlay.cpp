// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#include "WenPlay.h"

#define LOCTEXT_NAMESPACE "FWenPlayModule"

void FWenPlayModule::StartupModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	if (!FModuleManager::Get().IsModuleLoaded("PlatformCrypto"))
	{
		FModuleManager::Get().LoadModule("PlatformCrypto");
	}

	if (!FModuleManager::Get().IsModuleLoaded("SSL"))
	{
		FModuleManager::Get().LoadModule("SSL");
	}
}

void FWenPlayModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWenPlayModule, WenPlay)
