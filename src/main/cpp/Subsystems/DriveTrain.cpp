#include "Subsystems/DriveTrain.h"
#include "Commands/HumanDriver.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {}

void DriveTrain::InitDefaultCommand() {
  SetDefaultCommand(new HumanDriver());
}

void DriveTrain::arcadeDrive(double move, double angle)
{
  driveTrain.ArcadeDrive(move, angle);
}
