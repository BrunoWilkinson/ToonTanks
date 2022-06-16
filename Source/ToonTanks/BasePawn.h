// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	void RotateTurret(FVector LookAtTarget);
	void Fire();

private:
	UPROPERTY(VisibleAnyWhere, BluePrintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnyWhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Components")
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnyWhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Components")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnyWhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Components")
	USceneComponent* ProjectileSpawnPoint;
};
