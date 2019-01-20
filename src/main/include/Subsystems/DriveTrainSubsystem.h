/*
Title: Drive Train Subsystem
Description: A subsystem for control of the robot platform.
*/

#pragma once

#include <Commands/Subsystem.h>

#include <PWMVictorSPX.h>
#include <Drive/DifferentialDrive.h>

class DriveTrainSubsystem : public frc::Subsystem {
 public:
  DriveTrainSubsystem();
  void InitDefaultCommand() override;
  void arcadeDrive(double move, double angle);
 private:
  PWMVictorSPX motorLeft{0};
  PWMVictorSPX motorRight{1};
  DifferentialDrive driveTrain {motorLeft, motorRight};
};
