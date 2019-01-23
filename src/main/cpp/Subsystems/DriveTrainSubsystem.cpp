#include "Subsystems/DriveTrainSubsystem.h"
#include "Commands/HumanDriver.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem") {
  motorLeft.SetInverted(true);
  motorRight.SetInverted(true);
  ultrasonic.SetAutomaticMode(true);
}

void DriveTrainSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new HumanDriver());
}

void DriveTrainSubsystem::arcadeDrive(double move, double angle)
{
  driveTrain.ArcadeDrive(move, angle);
}
