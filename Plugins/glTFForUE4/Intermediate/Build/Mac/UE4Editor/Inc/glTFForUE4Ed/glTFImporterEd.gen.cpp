// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4Ed/Private/glTF/glTFImporterEd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFImporterEd() {}
// Cross Module References
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFImporterEdData_NoRegister();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFImporterEdData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4Ed();
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptions();
// End Cross Module References
	void UglTFImporterEdData::StaticRegisterNativesUglTFImporterEdData()
	{
	}
	UClass* Z_Construct_UClass_UglTFImporterEdData_NoRegister()
	{
		return UglTFImporterEdData::StaticClass();
	}
	struct Z_Construct_UClass_UglTFImporterEdData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_glTFImporterOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_glTFImporterOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFImporterEdData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4Ed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterEdData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "glTF/glTFImporterEd.h" },
		{ "ModuleRelativePath", "Private/glTF/glTFImporterEd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterEdData_Statics::NewProp_glTFImporterOptions_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Private/glTF/glTFImporterEd.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFImporterEdData_Statics::NewProp_glTFImporterOptions = { "glTFImporterOptions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UglTFImporterEdData, glTFImporterOptions), Z_Construct_UScriptStruct_FglTFImporterOptions, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterEdData_Statics::NewProp_glTFImporterOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterEdData_Statics::NewProp_glTFImporterOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFImporterEdData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterEdData_Statics::NewProp_glTFImporterOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFImporterEdData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFImporterEdData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFImporterEdData_Statics::ClassParams = {
		&UglTFImporterEdData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UglTFImporterEdData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterEdData_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFImporterEdData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterEdData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFImporterEdData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFImporterEdData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFImporterEdData, 3711154417);
	template<> GLTFFORUE4ED_API UClass* StaticClass<UglTFImporterEdData>()
	{
		return UglTFImporterEdData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFImporterEdData(Z_Construct_UClass_UglTFImporterEdData, &UglTFImporterEdData::StaticClass, TEXT("/Script/glTFForUE4Ed"), TEXT("UglTFImporterEdData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFImporterEdData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
