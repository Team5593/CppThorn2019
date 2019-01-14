/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/HumanDriver.h"

HumanDriver::HumanDriver() {
  // Use Requires() here to declare subsystem dependencies
  Requires (&Robot::driveTrain);
}

// Called just before this Command runs the first time
void HumanDriver::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void HumanDriver::Execute() 
{
  const double BASE_SPEED = 0.75;
  auto forwards = controller.GetRawAxis(1);
  auto heading = controller.GetRawAxis(4);
  auto throttle = BASE_SPEED + (controller.GetRawAxis(3) * (1-BASE_SPEED));
  Robot::driveTrain.arcadeDrive(forwards * throttle, heading * throttle);
}

// Make this return true when this Command no longer needs to run execute()
bool HumanDriver::IsFinished() { return false; }

// Called once after isFinished returns true
void HumanDriver::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HumanDriver::Interrupted() {}
