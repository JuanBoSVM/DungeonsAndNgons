// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonsAndNgons/DungeonsAndNgonsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonsAndNgonsGameMode() {}
// Cross Module References
	DUNGEONSANDNGONS_API UClass* Z_Construct_UClass_ADungeonsAndNgonsGameMode_NoRegister();
	DUNGEONSANDNGONS_API UClass* Z_Construct_UClass_ADungeonsAndNgonsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonsAndNgons();
// End Cross Module References
	void ADungeonsAndNgonsGameMode::StaticRegisterNativesADungeonsAndNgonsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADungeonsAndNgonsGameMode_NoRegister()
	{
		return ADungeonsAndNgonsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonsAndNgons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonsAndNgonsGameMode.h" },
		{ "ModuleRelativePath", "DungeonsAndNgonsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonsAndNgonsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::ClassParams = {
		&ADungeonsAndNgonsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonsAndNgonsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonsAndNgonsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonsAndNgonsGameMode, 2346975996);
	template<> DUNGEONSANDNGONS_API UClass* StaticClass<ADungeonsAndNgonsGameMode>()
	{
		return ADungeonsAndNgonsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonsAndNgonsGameMode(Z_Construct_UClass_ADungeonsAndNgonsGameMode, &ADungeonsAndNgonsGameMode::StaticClass, TEXT("/Script/DungeonsAndNgons"), TEXT("ADungeonsAndNgonsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonsAndNgonsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
