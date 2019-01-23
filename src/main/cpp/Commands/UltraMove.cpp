#include "Commands/UltraMove.h"

UltraMove::UltraMove(double distance, double speed):
  distance(distance),
  speed(speed)
{
  Requires (&Robot::driveTrainSubsystem);
}

void UltraMove::Initialize() {}

void UltraMove::Execute() 
{
  Robot::driveTrainSubsystem.arcadeDrive(speed, 0);
}

bool UltraMove::IsFinished() {
  return Robot::driveTrainSubsystem.ultrasonic.GetRangeMM() < distance;
}

void UltraMove::End() {
  Robot::driveTrainSubsystem.arcadeDrive(0, 0);
}

void UltraMove::Interrupted() { End(); }
