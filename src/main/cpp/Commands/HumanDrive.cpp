/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/HumanDrive.h"

#include "Robot.h"

HumanDrive::HumanDrive() {
  Requires(&Robot::drive_train);
}

void HumanDrive::Initialize() {}

void HumanDrive::Execute() {
  double throttle = Robot::oi.controller.GetThrottle();
  double twist    = Robot::oi.controller.GetTwist();

  Robot::drive_train.GetDriveSystem()->ArcadeDrive(throttle, twist);
}

bool HumanDrive::IsFinished() { return false; }

void HumanDrive::End() {}

void HumanDrive::Interrupted() {}
