// Copyright 2023 peifeng.ye. All Rights Reserved.
#include "LidarActor.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

ALidarActor::ALidarActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	LidarMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidarBox"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere"));
	if (SphereMesh.Succeeded())
	{
		LidarMeshComponent->SetStaticMesh(SphereMesh.Object);
	}

	// Attach the component to the root component
	RootComponent = LidarMeshComponent;

	LidarHorizontalResolution = 0.33f;

	TArray<float> DefaultVerticalAngle = {
		10.67f, 9.34f, 8.01f, 5.35f, 4.02f, 2.69f, 1.36f, 0.03f, -1.3f, -2.63f,
		-3.96f, -5.29f, -6.62f, -7.95f, -9.28f, -10.61f, -11.94f, -13.27f, -14.6f, -15.93f,
		-17.26f, -18.59f, -19.92f, -21.25f, -22.58f, -23.91f, -25.24f, -26.57f, -27.9f, -29.23f, -30.56f};
	LidarVerticalChannel = MoveTemp(DefaultVerticalAngle);
}

TArray<FVector> ALidarActor::GetPointCloud()
{
	if (LidarRayDirections.IsEmpty())
		GenerateLidarRayDirections();

	uint32 TotalRayCount = LidarRayDirections.Num(); // Количество лучей в одном круговом сканировании
	TArray<FVector> LidarOutput;
	LidarOutput.SetNumUninitialized(TotalRayCount);
	FVector LidarLocation = GetActorLocation(); // Локация лидара
	FRotator LidarRotation = GetActorRotation(); // Поворот лидара
	FVector WorldRayDirection;
	FVector EndLocation;
	FHitResult HitResult;
	FCollisionQueryParams TraceParams;

	// Круговое сканирование

	ParallelFor(TotalRayCount, [&](int32 Index)
		{
			WorldRayDirection = LidarRotation.RotateVector(LidarRayDirections[Index]);
			EndLocation = LidarLocation + WorldRayDirection * MaxTracingDistance;

			// Определяем параметры
			TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);
			TraceParams.bTraceComplex = true;
			TraceParams.bReturnPhysicalMaterial = false;

			// Запуск луча
			GetWorld()->LineTraceSingleByChannel(HitResult, LidarLocation, EndLocation, ECC_Visibility, TraceParams);

			// Проверка на попадание
			if (HitResult.bBlockingHit)
			{
				// Записываем точку попадания для луча
				LidarOutput[Index] = LidarLocation + WorldRayDirection * HitResult.Distance;
			}
			else
			{
				// Записываем точку с "пустыми координатами"
				LidarOutput[Index] = FVector(NAN, NAN, NAN);
			}
		});


	return LidarOutput;
}

void ALidarActor::DrawDebugLidarPoint()
{
	TArray<FVector> LidarOutput = GetPointCloud();
	for (int RayIndex = 0; RayIndex < LidarOutput.Num(); RayIndex++)
	{
		if (LidarOutput[RayIndex].ContainsNaN() == false)
		{
			DrawDebugPoint(GetWorld(), LidarOutput[RayIndex], 2.0f, FColor(255, 0, 0), false, DebugPointDrawTime);
		}
	}
}

void ALidarActor::GenerateLidarRayDirections()
{
	LidarRayDirections.Empty();

	int TotalHorizontalChannelCount = 360.0f / LidarHorizontalResolution;

	for (int HorizontalChannel = 0; HorizontalChannel < TotalHorizontalChannelCount; HorizontalChannel++)
	{
		float Azimuth = HorizontalChannel * LidarHorizontalResolution;

		for (int VerticalChannel = 0; VerticalChannel < LidarVerticalChannel.Num(); VerticalChannel++)
		{
			float Vertical = FMath::DegreesToRadians(LidarVerticalChannel[VerticalChannel]);

			LidarRayDirections.Add(
				FVector(
					FMath::Cos(Azimuth) * FMath::Cos(Vertical),
					FMath::Sin(Azimuth) * FMath::Cos(Vertical),
					FMath::Sin(Vertical)
				));
		}
	}
}