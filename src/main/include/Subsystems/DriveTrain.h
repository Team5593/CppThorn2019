/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>

#include <PWMVictorSPX.h>
#include <Drive/DifferentialDrive.h>

class DriveTrain : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void arcadeDrive(double move, double angle);
 private:
  PWMVictorSPX motorLeft{0};
  PWMVictorSPX motorRight{1};
  DifferentialDrive driveTrain {motorLeft, motorRight};
};
