// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectPathfinding.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ProjectPathfinding() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingCharacter_NoRegister();
	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingCharacter();
	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingGameMode_NoRegister();
	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingGameMode();
	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingPlayerController_NoRegister();
	PROJECTPATHFINDING_API class UClass* Z_Construct_UClass_AProjectPathfindingPlayerController();
	PROJECTPATHFINDING_API class UPackage* Z_Construct_UPackage__Script_ProjectPathfinding();
	void AProjectPathfindingCharacter::StaticRegisterNativesAProjectPathfindingCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProjectPathfindingCharacter_NoRegister()
	{
		return AProjectPathfindingCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectPathfindingCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_ProjectPathfinding();
			OuterClass = AProjectPathfindingCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CursorToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CursorToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CursorToWorld, AProjectPathfindingCharacter), 0x00400000000a001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AProjectPathfindingCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_TopDownCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TopDownCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TopDownCameraComponent, AProjectPathfindingCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectPathfindingCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectPathfindingCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ToolTip"), TEXT("A decal that projects to the cursor location."));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera above the character"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingCharacter.h"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ToolTip"), TEXT("Top down camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPathfindingCharacter, 1579739511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPathfindingCharacter(Z_Construct_UClass_AProjectPathfindingCharacter, &AProjectPathfindingCharacter::StaticClass, TEXT("/Script/ProjectPathfinding"), TEXT("AProjectPathfindingCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPathfindingCharacter);
	void AProjectPathfindingGameMode::StaticRegisterNativesAProjectPathfindingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectPathfindingGameMode_NoRegister()
	{
		return AProjectPathfindingGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectPathfindingGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ProjectPathfinding();
			OuterClass = AProjectPathfindingGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectPathfindingGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectPathfindingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPathfindingGameMode, 2080779032);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPathfindingGameMode(Z_Construct_UClass_AProjectPathfindingGameMode, &AProjectPathfindingGameMode::StaticClass, TEXT("/Script/ProjectPathfinding"), TEXT("AProjectPathfindingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPathfindingGameMode);
	void AProjectPathfindingPlayerController::StaticRegisterNativesAProjectPathfindingPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProjectPathfindingPlayerController_NoRegister()
	{
		return AProjectPathfindingPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectPathfindingPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_ProjectPathfinding();
			OuterClass = AProjectPathfindingPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectPathfindingPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectPathfindingPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectPathfindingPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPathfindingPlayerController, 2664204730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPathfindingPlayerController(Z_Construct_UClass_AProjectPathfindingPlayerController, &AProjectPathfindingPlayerController::StaticClass, TEXT("/Script/ProjectPathfinding"), TEXT("AProjectPathfindingPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPathfindingPlayerController);
	UPackage* Z_Construct_UPackage__Script_ProjectPathfinding()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ProjectPathfinding")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x3D9CD5F1;
			Guid.B = 0x24A6FDEC;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
