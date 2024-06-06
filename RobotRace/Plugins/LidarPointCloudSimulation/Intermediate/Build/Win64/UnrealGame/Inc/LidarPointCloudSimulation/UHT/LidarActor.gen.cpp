// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloudSimulation/Public/LidarActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LIDARPOINTCLOUDSIMULATION_API UClass* Z_Construct_UClass_ALidarActor();
	LIDARPOINTCLOUDSIMULATION_API UClass* Z_Construct_UClass_ALidarActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudSimulation();
// End Cross Module References
	DEFINE_FUNCTION(ALidarActor::execDrawDebugLidarPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLidarPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALidarActor::execGenerateLidarRayDirections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateLidarRayDirections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALidarActor::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointCloud();
		P_NATIVE_END;
	}
	void ALidarActor::StaticRegisterNativesALidarActor()
	{
		UClass* Class = ALidarActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugLidarPoint", &ALidarActor::execDrawDebugLidarPoint },
			{ "GenerateLidarRayDirections", &ALidarActor::execGenerateLidarRayDirections },
			{ "GetPointCloud", &ALidarActor::execGetPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Lidar" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALidarActor, nullptr, "DrawDebugLidarPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Lidar" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALidarActor, nullptr, "GenerateLidarRayDirections", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics
	{
		struct LidarActor_eventGetPointCloud_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LidarActor_eventGetPointCloud_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Lidar" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALidarActor, nullptr, "GetPointCloud", nullptr, nullptr, Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::LidarActor_eventGetPointCloud_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::LidarActor_eventGetPointCloud_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALidarActor_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALidarActor_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALidarActor);
	UClass* Z_Construct_UClass_ALidarActor_NoRegister()
	{
		return ALidarActor::StaticClass();
	}
	struct Z_Construct_UClass_ALidarActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidarMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LidarMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LidarRayDirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidarRayDirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LidarRayDirections;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LidarVerticalChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidarVerticalChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LidarVerticalChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LidarHorizontalOffset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidarHorizontalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LidarHorizontalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidarHorizontalResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LidarHorizontalResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTracingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointDrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPointDrawTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALidarActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALidarActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALidarActor_DrawDebugLidarPoint, "DrawDebugLidarPoint" }, // 4109654418
		{ &Z_Construct_UFunction_ALidarActor_GenerateLidarRayDirections, "GenerateLidarRayDirections" }, // 418694922
		{ &Z_Construct_UFunction_ALidarActor_GetPointCloud, "GetPointCloud" }, // 1996693688
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Materials" },
		{ "IncludePath", "LidarActor.h" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarMeshComponent_MetaData[] = {
		{ "Category", "LidarActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarMeshComponent = { "LidarMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, LidarMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarMeshComponent_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarMeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections_Inner = { "LidarRayDirections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections_MetaData[] = {
		{ "Category", "LidarActor" },
		{ "ModuleRelativePath", "Public/LidarActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections = { "LidarRayDirections", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, LidarRayDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel_Inner = { "LidarVerticalChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel_MetaData[] = {
		{ "Category", "LidarActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LidarActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel = { "LidarVerticalChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, LidarVerticalChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset_Inner = { "LidarHorizontalOffset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset_MetaData[] = {
		{ "Category", "LidarActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LidarActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset = { "LidarHorizontalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, LidarHorizontalOffset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalResolution_MetaData[] = {
		{ "Category", "LidarActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LidarActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalResolution = { "LidarHorizontalResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, LidarHorizontalResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalResolution_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_MaxTracingDistance_MetaData[] = {
		{ "Category", "LidarActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LidarActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_MaxTracingDistance = { "MaxTracingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, MaxTracingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_MaxTracingDistance_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_MaxTracingDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarActor_Statics::NewProp_DebugPointDrawTime_MetaData[] = {
		{ "Category", "LidarActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/LidarActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALidarActor_Statics::NewProp_DebugPointDrawTime = { "DebugPointDrawTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALidarActor, DebugPointDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::NewProp_DebugPointDrawTime_MetaData), Z_Construct_UClass_ALidarActor_Statics::NewProp_DebugPointDrawTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALidarActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarRayDirections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarVerticalChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_LidarHorizontalResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_MaxTracingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarActor_Statics::NewProp_DebugPointDrawTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALidarActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALidarActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALidarActor_Statics::ClassParams = {
		&ALidarActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALidarActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALidarActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALidarActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALidarActor()
	{
		if (!Z_Registration_Info_UClass_ALidarActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALidarActor.OuterSingleton, Z_Construct_UClass_ALidarActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALidarActor.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDSIMULATION_API UClass* StaticClass<ALidarActor>()
	{
		return ALidarActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALidarActor);
	ALidarActor::~ALidarActor() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALidarActor, ALidarActor::StaticClass, TEXT("ALidarActor"), &Z_Registration_Info_UClass_ALidarActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALidarActor), 2036714990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_2654584553(TEXT("/Script/LidarPointCloudSimulation"),
		Z_CompiledInDeferFile_FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
