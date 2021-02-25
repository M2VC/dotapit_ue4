// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4Ed/Private/glTF/glTFReimportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFReimportFactory() {}
// Cross Module References
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFReimportFactory_NoRegister();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFReimportFactory();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFFactory();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4Ed();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_NoRegister();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFSkeletalMeshReimportFactory();
// End Cross Module References
	void UglTFReimportFactory::StaticRegisterNativesUglTFReimportFactory()
	{
	}
	UClass* Z_Construct_UClass_UglTFReimportFactory_NoRegister()
	{
		return UglTFReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UglTFReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UglTFFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4Ed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "glTF/glTFReimportFactory.h" },
		{ "ModuleRelativePath", "Private/glTF/glTFReimportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFReimportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFReimportFactory_Statics::ClassParams = {
		&UglTFReimportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFReimportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFReimportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFReimportFactory, 1274667496);
	template<> GLTFFORUE4ED_API UClass* StaticClass<UglTFReimportFactory>()
	{
		return UglTFReimportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFReimportFactory(Z_Construct_UClass_UglTFReimportFactory, &UglTFReimportFactory::StaticClass, TEXT("/Script/glTFForUE4Ed"), TEXT("UglTFReimportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFReimportFactory);
	void UglTFSkeletalMeshReimportFactory::StaticRegisterNativesUglTFSkeletalMeshReimportFactory()
	{
	}
	UClass* Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_NoRegister()
	{
		return UglTFSkeletalMeshReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UglTFReimportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4Ed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "glTF/glTFReimportFactory.h" },
		{ "ModuleRelativePath", "Private/glTF/glTFReimportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFSkeletalMeshReimportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::ClassParams = {
		&UglTFSkeletalMeshReimportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFSkeletalMeshReimportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFSkeletalMeshReimportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFSkeletalMeshReimportFactory, 1120227698);
	template<> GLTFFORUE4ED_API UClass* StaticClass<UglTFSkeletalMeshReimportFactory>()
	{
		return UglTFSkeletalMeshReimportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFSkeletalMeshReimportFactory(Z_Construct_UClass_UglTFSkeletalMeshReimportFactory, &UglTFSkeletalMeshReimportFactory::StaticClass, TEXT("/Script/glTFForUE4Ed"), TEXT("UglTFSkeletalMeshReimportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFSkeletalMeshReimportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
