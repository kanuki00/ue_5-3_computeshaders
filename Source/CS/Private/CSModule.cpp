#include "CSModule.h"
#include "Modules/ModuleManager.h"
#include "ShaderCore.h"

IMPLEMENT_MODULE(FCSModule, ModuleTest);

void FCSModule::StartupModule() 
{
	const FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	const FString CustomShaderDirectory = "/CustomShaders";
	//AddShaderSourceDirectoryMapping(CustomShaderDirectory, ShaderDirectory);
}

void FCSModule::ShutdownModule()
{

}