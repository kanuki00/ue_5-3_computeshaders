#include "SomeCS.h"
#include "GlobalShader.h"
#include "ShaderParameterStruct.h"
#include "RenderTargetPool.h"
#include "RHI.h"

#include "Modules/ModuleManager.h"

#define NUM_THREADS_PER_GROUP_DIMENSION 10

class FSomeCS : public FGlobalShader
{
    DECLARE_GLOBAL_SHADER(FSomeCS)
    SHADER_USE_PARAMETER_STRUCT(FSomeCS, FGlobalShader)

        BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
            SHADER_PARAMETER_UAV(RWTexture2D<float>, OutputTexture)
            SHADER_PARAMETER(FVector2D, Dimensions)
            SHADER_PARAMETER(UINT, TimeStamp)
        END_SHADER_PARAMETER_STRUCT()

        static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
    {
        return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
    }

    static inline void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
    {
        FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);

        //We're using it here to add some preprocessor defines. 
        // That way we don't have to change both C++ and HLSL code when 
        // we change the value for NUM_THREADS_PER_GROUP_DIMENSION
        OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_X"), NUM_THREADS_PER_GROUP_DIMENSION);
        OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Y"), NUM_THREADS_PER_GROUP_DIMENSION);
        OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Z"), 1);
    }
};

IMPLEMENT_GLOBAL_SHADER(FSomeCS, "/CustomShaders/SomeCS.usf", "MainCS", SF_Compute);
