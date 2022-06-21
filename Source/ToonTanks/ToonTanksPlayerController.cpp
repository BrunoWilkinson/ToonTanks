// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksPlayerController.h"

void AToonTanksPlayerController::SetPlayerEnabledState(bool bPlayerEnabled)
{
	if (GetPawn())
	{
		if (bPlayerEnabled)
		{
			GetPawn()->EnableInput(this);
		}
		else
		{
			GetPawn()->DisableInput(this);
		}
		bShowMouseCursor = bPlayerEnabled;
	}
	else 
	{
		UE_LOG(LogTemp, Error, TEXT("Check Player Start Location!"));
	}
}