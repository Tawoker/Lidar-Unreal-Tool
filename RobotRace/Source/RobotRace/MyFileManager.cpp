// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFileManager.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

//FString UMyFileManager::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
//{
//    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
//    {
//        bOutSuccess = false;
//        OutInfoMessage = FString::Printf(TEXT("Read string failed - File doesn't exist - '%s'"), *FilePath);
//        return "";
//    }
//    
//    FString RetString = "";
//
//    if (!FFileHelper::LoadFileToString(RetString, *FilePath))
//    {
//        bOutSuccess = false;
//        OutInfoMessage = FString::Printf(TEXT("Read string failed - Was not able to read file. - '%s'"), *FilePath);
//        return "";
//    }
//    
//    bOutSuccess = true;
//    OutInfoMessage = FString::Printf(TEXT("Read string succeeded. - '%s'"), *FilePath);
//    return RetString;
//}
//
//void UMyFileManager::WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage)
//{
//    if (!FFileHelper::SaveStringToFile(String, *FilePath))
//    {
//        bOutSuccess = false;
//        OutInfoMessage = FString::Printf(TEXT("Write string failed - Was not able to write to file. - '%s'"), *FilePath);
//        return;
//    }
//
//    bOutSuccess = true;
//    OutInfoMessage = FString::Printf(TEXT("Write string to file succeeded. - '%s'"), *FilePath);
//}

void UMyFileManager::WriteFloatArrayToBinaryFile(FString FilePath, TArray<double> Array)
{
    int length = Array.Num();
    size_t bytes = sizeof(double) * length;
    double *outArr = new double[length];

    for (int i = 0; i < Array.Num(); i++)
    {
        outArr[i] = Array[i];
    }

    std::string filePath = TCHAR_TO_UTF8(*FilePath);

    std::ofstream out(filePath, std::ios::out | std::ios::binary);
    out.write((char*)outArr, bytes);
    out.close();

}