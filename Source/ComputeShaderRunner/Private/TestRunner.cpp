#include "TestRunner.h"

ATestRunner::ATestRunner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATestRunner::BeginPlay()
{
	Super::BeginPlay();
	field = ForceField();
	Initialized = false;
}

void ATestRunner::Tick(float DeltaTime)
{
	TranscurredTime+=DeltaTime;
	Super::Tick(DeltaTime);

	if(TranscurredTime>1.0f)
	{
		if(!Initialized)
		{
			field.BeginRendering();
			Initialized = true;
		}
			
		FForceFieldCSParameters parameters(RenderTarget);
		TimeStamp++;
		parameters.TimeStamp = TimeStamp;
		field.UpdateParameters(parameters);
	}
}
void ATestRunner::BeginDestroy()
{
	Super::BeginDestroy();
	field.EndRendering();
}