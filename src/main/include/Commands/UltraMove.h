/*
Title: Human Driver
Description: Allows the driver to control the drive-train of the robot.
*/

#pragma once

#include <Commands/Command.h>
#include "../Robot.h"

class UltraMove : public frc::Command {
 public:
  UltraMove(double distance, double speed);
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
 private:
  double speed;
  double distance;
};
