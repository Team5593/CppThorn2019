#include "Commands/HumanDriver.h"

HumanDriver::HumanDriver() {
  Requires (&Robot::driveTrainSubsystem);
}

void HumanDriver::Initialize() {}

void HumanDriver::Execute() 
{
  const double BASE_SPEED = 0.75;
  auto forwards = controller.GetRawAxis(1);
  auto heading = controller.GetRawAxis(4);
  auto throttle = BASE_SPEED + (controller.GetRawAxis(3) * (1-BASE_SPEED));
  Robot::driveTrainSubsystem.arcadeDrive(forwards * throttle, heading * throttle);
}

bool HumanDriver::IsFinished() { return false; }

void HumanDriver::End() {}

void HumanDriver::Interrupted() {}
