// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyFileManager.generated.h"

/**
 * 
 */
UCLASS()
class ROBOTRACE_API UMyFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int testVar = 0;

	//UFUNCTION(BlueprintCallable)
	//static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	//UFUNCTION(BlueprintCallable)
	//static void WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable)
	static void WriteFloatArrayToBinaryFile(FString FilePath, TArray<double> Array);
};
