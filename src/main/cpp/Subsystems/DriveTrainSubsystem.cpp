#include "Subsystems/DriveTrainSubsystem.h"
#include "Commands/HumanDriver.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem") {}

void DriveTrainSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new HumanDriver());
}

void DriveTrainSubsystem::arcadeDrive(double move, double angle)
{
  driveTrain.ArcadeDrive(move, angle);
}
