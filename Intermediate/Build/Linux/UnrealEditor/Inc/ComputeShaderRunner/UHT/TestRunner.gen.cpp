// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeShaderRunner/Public/TestRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestRunner() {}
// Cross Module References
	COMPUTESHADERRUNNER_API UClass* Z_Construct_UClass_ATestRunner();
	COMPUTESHADERRUNNER_API UClass* Z_Construct_UClass_ATestRunner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComputeShaderRunner();
// End Cross Module References
	void ATestRunner::StaticRegisterNativesATestRunner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestRunner);
	UClass* Z_Construct_UClass_ATestRunner_NoRegister()
	{
		return ATestRunner::StaticClass();
	}
	struct Z_Construct_UClass_ATestRunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestRunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeShaderRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestRunner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestRunner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestRunner.h" },
		{ "ModuleRelativePath", "Public/TestRunner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestRunner_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "ShaderDemo" },
		{ "ModuleRelativePath", "Public/TestRunner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestRunner_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestRunner, RenderTarget), Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestRunner_Statics::NewProp_RenderTarget_MetaData), Z_Construct_UClass_ATestRunner_Statics::NewProp_RenderTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestRunner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestRunner_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestRunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestRunner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestRunner_Statics::ClassParams = {
		&ATestRunner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestRunner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestRunner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestRunner_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestRunner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestRunner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATestRunner()
	{
		if (!Z_Registration_Info_UClass_ATestRunner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestRunner.OuterSingleton, Z_Construct_UClass_ATestRunner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestRunner.OuterSingleton;
	}
	template<> COMPUTESHADERRUNNER_API UClass* StaticClass<ATestRunner>()
	{
		return ATestRunner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestRunner);
	ATestRunner::~ATestRunner() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ue_5_3_computeshaders_Source_ComputeShaderRunner_Public_TestRunner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ue_5_3_computeshaders_Source_ComputeShaderRunner_Public_TestRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestRunner, ATestRunner::StaticClass, TEXT("ATestRunner"), &Z_Registration_Info_UClass_ATestRunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestRunner), 426530070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ue_5_3_computeshaders_Source_ComputeShaderRunner_Public_TestRunner_h_3657742678(TEXT("/Script/ComputeShaderRunner"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ue_5_3_computeshaders_Source_ComputeShaderRunner_Public_TestRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ue_5_3_computeshaders_Source_ComputeShaderRunner_Public_TestRunner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
