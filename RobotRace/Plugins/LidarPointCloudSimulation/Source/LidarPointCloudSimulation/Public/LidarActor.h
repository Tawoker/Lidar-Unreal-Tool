
#pragma once

#include "GameFramework/Actor.h"
#include "LidarActor.generated.h"

UCLASS(BlueprintType, hidecategories = ("Materials"))
class LIDARPOINTCLOUDSIMULATION_API ALidarActor : public AActor
{
	GENERATED_UCLASS_BODY()

private:

	UPROPERTY(Category = LidarActor, VisibleAnywhere)
	UStaticMeshComponent* LidarMeshComponent;

public:
	UPROPERTY(Category = LidarActor, VisibleAnywhere, BlueprintReadOnly)
	TArray<FVector> LidarRayDirections;

	UPROPERTY(Category = LidarActor, EditAnywhere, BlueprintReadWrite) // ”глы лучей по вертикали в градусах
	TArray<float> LidarVerticalChannel;

	UPROPERTY(Category = LidarActor, EditAnywhere, BlueprintReadWrite) // ”гол между каждым лучем в горизонтальной плоскости в градусах
	float LidarHorizontalResolution = 0.2f;

	UPROPERTY(Category = LidarActor, EditAnywhere, BlueprintReadWrite) // ћаксимальна€ дальность попадани€ луча в сантиметрах
	float MaxTracingDistance = 10000.0f;

	UPROPERTY(Category = LidarActor, EditAnywhere, BlueprintReadWrite) // ¬рем€ отрисовки лучей
	float DebugPointDrawTime = 1.0f;

public:
	
	UFUNCTION(BlueprintCallable, Category = "Components|Lidar")
	TArray<FVector> GetPointCloud();

	UFUNCTION(BlueprintCallable, Category = "Components|Lidar")
	void GenerateLidarRayDirections();

	UFUNCTION(BlueprintCallable, Category = "Components|Lidar")
	void DrawDebugLidarPoint();
};