/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <ADXRS450_Gyro.h>
#include <PWMTalonSRX.h>
#include <Drive/DifferentialDrive.h>
#include "Commands/HumanDrive.h"

class DriveTrain : public frc::Subsystem {
 private:
  // Sensors
  ADXRS450_Gyro gyro;

  // Motor Controllers
  PWMTalonSRX talon_motor_left {0};
  PWMTalonSRX talon_motor_right {1};

  // Drive System
  DifferentialDrive drive_system {talon_motor_left, talon_motor_right};

 public:
  DriveTrain();
  void InitDefaultCommand() override;

  DifferentialDrive * GetDriveSystem();
};
