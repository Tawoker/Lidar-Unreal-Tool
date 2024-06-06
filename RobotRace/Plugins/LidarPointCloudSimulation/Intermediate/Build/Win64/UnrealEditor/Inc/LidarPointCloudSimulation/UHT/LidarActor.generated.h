// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDSIMULATION_LidarActor_generated_h
#error "LidarActor.generated.h already included, missing '#pragma once' in LidarActor.h"
#endif
#define LIDARPOINTCLOUDSIMULATION_LidarActor_generated_h

#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_SPARSE_DATA
#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebugLidarPoint); \
	DECLARE_FUNCTION(execGenerateLidarRayDirections); \
	DECLARE_FUNCTION(execGetPointCloud);


#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_ACCESSORS
#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesALidarActor(); \
	friend struct Z_Construct_UClass_ALidarActor_Statics; \
public: \
	DECLARE_CLASS(ALidarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudSimulation"), NO_API) \
	DECLARE_SERIALIZER(ALidarActor)


#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALidarActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALidarActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALidarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALidarActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALidarActor(ALidarActor&&); \
	NO_API ALidarActor(const ALidarActor&); \
public: \
	NO_API virtual ~ALidarActor();


#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_7_PROLOG
#define FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_SPARSE_DATA \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_RPC_WRAPPERS \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_ACCESSORS \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_INCLASS \
	FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDSIMULATION_API UClass* StaticClass<class ALidarActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_RobotRaceCopy_Plugins_LidarPointCloudSimulation_Source_LidarPointCloudSimulation_Public_LidarActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
