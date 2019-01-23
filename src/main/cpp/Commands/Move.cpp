#include "Commands/Move.h"

Move::Move(double time, double speed):
  TimedCommand(time),
  speed(speed)
{
  Requires (&Robot::driveTrainSubsystem);
}

void Move::Initialize() {}

void Move::Execute() 
{
  Robot::driveTrainSubsystem.arcadeDrive(speed, 0);
}

void Move::End() {
  Robot::driveTrainSubsystem.arcadeDrive(0, 0);
}

void Move::Interrupted() { End(); }
