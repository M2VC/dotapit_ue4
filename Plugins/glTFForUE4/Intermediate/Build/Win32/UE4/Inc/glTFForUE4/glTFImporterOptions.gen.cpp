// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4/Public/glTF/glTFImporterOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFImporterOptions() {}
// Cross Module References
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptions();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4();
	GLTFFORUE4_API UClass* Z_Construct_UClass_UglTFImporterOptionsDetails_NoRegister();
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored();
	GLTFFORUE4_API UClass* Z_Construct_UClass_UglTFImporterOptionsDetails();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FglTFImporterOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFFORUE4_API uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FglTFImporterOptions, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("glTFImporterOptions"), sizeof(FglTFImporterOptions), Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash());
	}
	return Singleton;
}
template<> GLTFFORUE4_API UScriptStruct* StaticStruct<FglTFImporterOptions>()
{
	return FglTFImporterOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FglTFImporterOptions(FglTFImporterOptions::StaticStruct, TEXT("/Script/glTFForUE4"), TEXT("glTFImporterOptions"), false, nullptr, nullptr);
static struct FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions
{
	FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("glTFImporterOptions")),new UScriptStruct::TCppStructOps<FglTFImporterOptions>);
	}
} ScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions;
	struct Z_Construct_UScriptStruct_FglTFImporterOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailsStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetailsStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathInEngine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathInEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathInOS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathInOS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FglTFImporterOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_Details_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, Details), Z_Construct_UClass_UglTFImporterOptionsDetails_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_DetailsStored_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_DetailsStored = { "DetailsStored", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, DetailsStored), Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_DetailsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_DetailsStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine = { "FilePathInEngine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, FilePathInEngine), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS = { "FilePathInOS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, FilePathInOS), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_DetailsStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
		nullptr,
		&NewStructOps,
		"glTFImporterOptions",
		sizeof(FglTFImporterOptions),
		alignof(FglTFImporterOptions),
		Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("glTFImporterOptions"), sizeof(FglTFImporterOptions), Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash() { return 2192065685U; }
class UScriptStruct* FglTFImporterOptionsDetailsStored::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFFORUE4_API uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("glTFImporterOptionsDetailsStored"), sizeof(FglTFImporterOptionsDetailsStored), Get_Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Hash());
	}
	return Singleton;
}
template<> GLTFFORUE4_API UScriptStruct* StaticStruct<FglTFImporterOptionsDetailsStored>()
{
	return FglTFImporterOptionsDetailsStored::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FglTFImporterOptionsDetailsStored(FglTFImporterOptionsDetailsStored::StaticStruct, TEXT("/Script/glTFForUE4"), TEXT("glTFImporterOptionsDetailsStored"), false, nullptr, nullptr);
static struct FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptionsDetailsStored
{
	FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptionsDetailsStored()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("glTFImporterOptionsDetailsStored")),new UScriptStruct::TCppStructOps<FglTFImporterOptionsDetailsStored>);
	}
} ScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptionsDetailsStored;
	struct Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialInstance_MetaData[];
#endif
		static void NewProp_bUseMaterialInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTarget_MetaData[];
#endif
		static void NewProp_bImportMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAnimation_MetaData[];
#endif
		static void NewProp_bImportAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[];
#endif
		static void NewProp_bRecomputeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[];
#endif
		static void NewProp_bInvertNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAbsoluteTransform_MetaData[];
#endif
		static void NewProp_bApplyAbsoluteTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAbsoluteTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScaleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshScaleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportTexture_MetaData[];
#endif
		static void NewProp_bImportTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMaterial_MetaData[];
#endif
		static void NewProp_bImportMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMesh_MetaData[];
#endif
		static void NewProp_bImportSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMesh_MetaData[];
#endif
		static void NewProp_bImportStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAllScene_MetaData[];
#endif
		static void NewProp_bImportAllScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAllScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FglTFImporterOptionsDetailsStored>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/// material options\n" },
		{ "EditCondition", "bImportMaterial" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "material options" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bUseMaterialInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance = { "bUseMaterialInstance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the morph target?" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget = { "bImportMorphTarget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the animation for skeletal mesh or morph target?" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation = { "bImportAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bRecomputeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bRecomputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bInvertNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal = { "bInvertNormal", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bApplyAbsoluteTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform = { "bApplyAbsoluteTransform", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_MeshScaleRatio_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/// mesh options\n" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "mesh options" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_MeshScaleRatio = { "MeshScaleRatio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptionsDetailsStored, MeshScaleRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_MeshScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_MeshScaleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture_MetaData[] = {
		{ "Category", "Common" },
		{ "EditCondition", "bImportMaterial" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture = { "bImportTexture", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial = { "bImportMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Construct the skeletal mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh = { "bImportSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Construct the static mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh = { "bImportStaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import all scenes" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene_SetBit(void* Obj)
	{
		((FglTFImporterOptionsDetailsStored*)Obj)->bImportAllScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene = { "bImportAllScene", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptionsDetailsStored), &Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bCreatePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bRecomputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bUseMikkTSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bInvertNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bApplyAbsoluteTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_MeshScaleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::NewProp_bImportAllScene,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
		nullptr,
		&NewStructOps,
		"glTFImporterOptionsDetailsStored",
		sizeof(FglTFImporterOptionsDetailsStored),
		alignof(FglTFImporterOptionsDetailsStored),
		Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("glTFImporterOptionsDetailsStored"), sizeof(FglTFImporterOptionsDetailsStored), Get_Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptionsDetailsStored_Hash() { return 3054468610U; }
	void UglTFImporterOptionsDetails::StaticRegisterNativesUglTFImporterOptionsDetails()
	{
	}
	UClass* Z_Construct_UClass_UglTFImporterOptionsDetails_NoRegister()
	{
		return UglTFImporterOptionsDetails::StaticClass();
	}
	struct Z_Construct_UClass_UglTFImporterOptionsDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLevelTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportLevelTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportCameraInLevel_MetaData[];
#endif
		static void NewProp_bImportCameraInLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportCameraInLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportLightInLevel_MetaData[];
#endif
		static void NewProp_bImportLightInLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportLightInLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialInstance_MetaData[];
#endif
		static void NewProp_bUseMaterialInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTarget_MetaData[];
#endif
		static void NewProp_bImportMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAnimation_MetaData[];
#endif
		static void NewProp_bImportAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[];
#endif
		static void NewProp_bRecomputeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[];
#endif
		static void NewProp_bInvertNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAbsoluteTransform_MetaData[];
#endif
		static void NewProp_bApplyAbsoluteTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAbsoluteTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScaleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshScaleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportLevel_MetaData[];
#endif
		static void NewProp_bImportLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportTexture_MetaData[];
#endif
		static void NewProp_bImportTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMaterial_MetaData[];
#endif
		static void NewProp_bImportMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMesh_MetaData[];
#endif
		static void NewProp_bImportSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMesh_MetaData[];
#endif
		static void NewProp_bImportStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAllScene_MetaData[];
#endif
		static void NewProp_bImportAllScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAllScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "glTF/glTFImporterOptions.h" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_ImportLevelTemplate_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "Level" },
		{ "EditCondition", "bImportLevel" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import a new level that create by the template" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_ImportLevelTemplate = { "ImportLevelTemplate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UglTFImporterOptionsDetails, ImportLevelTemplate), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_ImportLevelTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_ImportLevelTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the camera in the level?" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportCameraInLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel = { "bImportCameraInLevel", nullptr, (EPropertyFlags)0x0010040000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the light in the level?" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportLightInLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel = { "bImportLightInLevel", nullptr, (EPropertyFlags)0x0010040000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/// material options\n" },
		{ "EditCondition", "bImportMaterial" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "material options" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bUseMaterialInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance = { "bUseMaterialInstance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the morph target?" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget = { "bImportMorphTarget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bImportSkeletalMesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import the animation for skeletal mesh or morph target?" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation = { "bImportAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bRecomputeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bRecomputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bInvertNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal = { "bInvertNormal", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bApplyAbsoluteTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform = { "bApplyAbsoluteTransform", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_MeshScaleRatio_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/// mesh options\n" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "mesh options" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_MeshScaleRatio = { "MeshScaleRatio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UglTFImporterOptionsDetails, MeshScaleRatio), METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_MeshScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_MeshScaleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Construct the scene in the current level or new level" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel = { "bImportLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture_MetaData[] = {
		{ "Category", "Common" },
		{ "EditCondition", "bImportMaterial" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture = { "bImportTexture", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial = { "bImportMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Construct the skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh = { "bImportSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Construct the static mesh" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh = { "bImportStaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import all scenes" },
	};
#endif
	void Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene_SetBit(void* Obj)
	{
		((UglTFImporterOptionsDetails*)Obj)->bImportAllScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene = { "bImportAllScene", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UglTFImporterOptionsDetails), &Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_ImportLevelTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportCameraInLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLightInLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bCreatePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bRecomputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bUseMikkTSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bInvertNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bApplyAbsoluteTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_MeshScaleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::NewProp_bImportAllScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFImporterOptionsDetails>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::ClassParams = {
		&UglTFImporterOptionsDetails::StaticClass,
		"glTFForUE4Settings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFImporterOptionsDetails()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFImporterOptionsDetails_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFImporterOptionsDetails, 915958211);
	template<> GLTFFORUE4_API UClass* StaticClass<UglTFImporterOptionsDetails>()
	{
		return UglTFImporterOptionsDetails::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFImporterOptionsDetails(Z_Construct_UClass_UglTFImporterOptionsDetails, &UglTFImporterOptionsDetails::StaticClass, TEXT("/Script/glTFForUE4"), TEXT("UglTFImporterOptionsDetails"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFImporterOptionsDetails);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
