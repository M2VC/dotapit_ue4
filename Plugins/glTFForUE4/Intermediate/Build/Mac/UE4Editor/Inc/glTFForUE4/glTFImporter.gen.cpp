// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4/Public/glTF/glTFImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFImporter() {}
// Cross Module References
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterCollection();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterNodeInfo();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FglTFImporterCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFFORUE4_API uint32 Get_Z_Construct_UScriptStruct_FglTFImporterCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FglTFImporterCollection, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("glTFImporterCollection"), sizeof(FglTFImporterCollection), Get_Z_Construct_UScriptStruct_FglTFImporterCollection_Hash());
	}
	return Singleton;
}
template<> GLTFFORUE4_API UScriptStruct* StaticStruct<FglTFImporterCollection>()
{
	return FglTFImporterCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FglTFImporterCollection(FglTFImporterCollection::StaticStruct, TEXT("/Script/glTFForUE4"), TEXT("glTFImporterCollection"), false, nullptr, nullptr);
static struct FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterCollection
{
	FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterCollection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("glTFImporterCollection")),new UScriptStruct::TCppStructOps<FglTFImporterCollection>);
	}
} ScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterCollection;
	struct Z_Construct_UScriptStruct_FglTFImporterCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkeletalMeshes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletalMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticMeshes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Materials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Textures_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeInfos;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeInfos_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeInfos_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FglTFImporterCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, SkeletalMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_Key_KeyProp = { "SkeletalMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_ValueProp = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, StaticMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_Key_KeyProp = { "StaticMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_ValueProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, Materials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos = { "NodeInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, NodeInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_Key_KeyProp = { "NodeInfos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_ValueProp = { "NodeInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FglTFImporterNodeInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterCollection, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_TargetWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_SkeletalMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_StaticMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_Textures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_NodeInfos_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::NewProp_TargetWorld,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
		nullptr,
		&NewStructOps,
		"glTFImporterCollection",
		sizeof(FglTFImporterCollection),
		alignof(FglTFImporterCollection),
		Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FglTFImporterCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("glTFImporterCollection"), sizeof(FglTFImporterCollection), Get_Z_Construct_UScriptStruct_FglTFImporterCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FglTFImporterCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FglTFImporterCollection_Hash() { return 157327724U; }
class UScriptStruct* FglTFImporterNodeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFFORUE4_API uint32 Get_Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FglTFImporterNodeInfo, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("glTFImporterNodeInfo"), sizeof(FglTFImporterNodeInfo), Get_Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Hash());
	}
	return Singleton;
}
template<> GLTFFORUE4_API UScriptStruct* StaticStruct<FglTFImporterNodeInfo>()
{
	return FglTFImporterNodeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FglTFImporterNodeInfo(FglTFImporterNodeInfo::StaticStruct, TEXT("/Script/glTFForUE4"), TEXT("glTFImporterNodeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterNodeInfo
{
	FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterNodeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("glTFImporterNodeInfo")),new UScriptStruct::TCppStructOps<FglTFImporterNodeInfo>);
	}
} ScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterNodeInfo;
	struct Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsoluteTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FglTFImporterNodeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_AbsoluteTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_AbsoluteTransform = { "AbsoluteTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterNodeInfo, AbsoluteTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_AbsoluteTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_AbsoluteTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterNodeInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterNodeInfo, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_ParentIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_AbsoluteTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::NewProp_ParentIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
		nullptr,
		&NewStructOps,
		"glTFImporterNodeInfo",
		sizeof(FglTFImporterNodeInfo),
		alignof(FglTFImporterNodeInfo),
		Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterNodeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("glTFImporterNodeInfo"), sizeof(FglTFImporterNodeInfo), Get_Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FglTFImporterNodeInfo_Hash() { return 2398311754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
