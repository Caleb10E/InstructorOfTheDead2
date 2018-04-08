#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "LevelBoundary.h"
// include draw debug helpers header file
#include "DrawDebugHelpers.h"

ALevelBoundary::ALevelBoundary()
{
	//Register Events
	OnActorBeginOverlap.AddDynamic(this, &ALevelBoundary::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ALevelBoundary::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ALevelBoundary::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetActorScale() * 100, FColor::Cyan, true, -1, 0, 5);

}

void ALevelBoundary::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this)) {
		// print to screen using above defined method when actor enters trigger volume
		print("Overlap Begin");
		printFString("Other Actor = %s", *OtherActor->GetName());
	}
}

void ALevelBoundary::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this)) {
		// print to screen using above defined method when actor leaves trigger volume
		print("Overlap Ended");
		printFString("%s has left the Trigger Volume", *OtherActor->GetName());
	}
}

