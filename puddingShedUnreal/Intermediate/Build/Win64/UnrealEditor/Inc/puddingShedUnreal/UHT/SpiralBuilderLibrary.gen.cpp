// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "puddingShedUnreal/Public/SpiralBuilderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiralBuilderLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PUDDINGSHEDUNREAL_API UClass* Z_Construct_UClass_USpiralBuilderLibrary();
	PUDDINGSHEDUNREAL_API UClass* Z_Construct_UClass_USpiralBuilderLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_puddingShedUnreal();
// End Cross Module References
	DEFINE_FUNCTION(USpiralBuilderLibrary::execBuildRenderedJson)
	{
		P_GET_STRUCT(FVector,Z_Param_meshOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_meshDivider);
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonPath);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_colours);
		P_GET_TARRAY_REF(float,Z_Param_Out_opacities);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_hism2Transforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=USpiralBuilderLibrary::BuildRenderedJson(Z_Param_meshOffset,Z_Param_meshDivider,Z_Param_JsonPath,Z_Param_Out_colours,Z_Param_Out_opacities,Z_Param_Out_hism2Transforms);
		P_NATIVE_END;
	}
	void USpiralBuilderLibrary::StaticRegisterNativesUSpiralBuilderLibrary()
	{
		UClass* Class = USpiralBuilderLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildRenderedJson", &USpiralBuilderLibrary::execBuildRenderedJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics
	{
		struct SpiralBuilderLibrary_eventBuildRenderedJson_Parms
		{
			FVector meshOffset;
			float meshDivider;
			FString JsonPath;
			TArray<FVector> colours;
			TArray<float> opacities;
			TArray<FTransform> hism2Transforms;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meshDivider;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colours_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colours;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_opacities_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_opacities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_hism2Transforms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_hism2Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_meshOffset = { "meshOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, meshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_meshDivider = { "meshDivider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, meshDivider), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_JsonPath = { "JsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, JsonPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_colours_Inner = { "colours", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_colours = { "colours", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, colours), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_opacities_Inner = { "opacities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_opacities = { "opacities", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, opacities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_hism2Transforms_Inner = { "hism2Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_hism2Transforms = { "hism2Transforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, hism2Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpiralBuilderLibrary_eventBuildRenderedJson_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_meshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_meshDivider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_JsonPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_colours_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_colours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_opacities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_opacities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_hism2Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_hism2Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spiral" },
		{ "ModuleRelativePath", "Public/SpiralBuilderLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpiralBuilderLibrary, nullptr, "BuildRenderedJson", nullptr, nullptr, Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::SpiralBuilderLibrary_eventBuildRenderedJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::SpiralBuilderLibrary_eventBuildRenderedJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpiralBuilderLibrary);
	UClass* Z_Construct_UClass_USpiralBuilderLibrary_NoRegister()
	{
		return USpiralBuilderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USpiralBuilderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiralBuilderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_puddingShedUnreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpiralBuilderLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpiralBuilderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpiralBuilderLibrary_BuildRenderedJson, "BuildRenderedJson" }, // 267306871
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpiralBuilderLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralBuilderLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A library that builds spirals and parts of spirals\n */" },
#endif
		{ "IncludePath", "SpiralBuilderLibrary.h" },
		{ "ModuleRelativePath", "Public/SpiralBuilderLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A library that builds spirals and parts of spirals" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiralBuilderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiralBuilderLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpiralBuilderLibrary_Statics::ClassParams = {
		&USpiralBuilderLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpiralBuilderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USpiralBuilderLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpiralBuilderLibrary()
	{
		if (!Z_Registration_Info_UClass_USpiralBuilderLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpiralBuilderLibrary.OuterSingleton, Z_Construct_UClass_USpiralBuilderLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpiralBuilderLibrary.OuterSingleton;
	}
	template<> PUDDINGSHEDUNREAL_API UClass* StaticClass<USpiralBuilderLibrary>()
	{
		return USpiralBuilderLibrary::StaticClass();
	}
	USpiralBuilderLibrary::USpiralBuilderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiralBuilderLibrary);
	USpiralBuilderLibrary::~USpiralBuilderLibrary() {}
	struct Z_CompiledInDeferFile_FID_Dev_Mishap_Github_pudding_shed_unreal_puddingShedUnreal_Source_puddingShedUnreal_Public_SpiralBuilderLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Mishap_Github_pudding_shed_unreal_puddingShedUnreal_Source_puddingShedUnreal_Public_SpiralBuilderLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpiralBuilderLibrary, USpiralBuilderLibrary::StaticClass, TEXT("USpiralBuilderLibrary"), &Z_Registration_Info_UClass_USpiralBuilderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpiralBuilderLibrary), 1570194110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Mishap_Github_pudding_shed_unreal_puddingShedUnreal_Source_puddingShedUnreal_Public_SpiralBuilderLibrary_h_1514025522(TEXT("/Script/puddingShedUnreal"),
		Z_CompiledInDeferFile_FID_Dev_Mishap_Github_pudding_shed_unreal_puddingShedUnreal_Source_puddingShedUnreal_Public_SpiralBuilderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Mishap_Github_pudding_shed_unreal_puddingShedUnreal_Source_puddingShedUnreal_Public_SpiralBuilderLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
