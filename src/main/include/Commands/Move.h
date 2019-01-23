/*
Title: Human Driver
Description: Allows the driver to control the drive-train of the robot.
*/

#pragma once

#include <Commands/TimedCommand.h>
#include "../Robot.h"

class Move : public frc::TimedCommand {
 public:
  Move(double time, double speed);
  void Initialize() override;
  void Execute() override;
  void End() override;
  void Interrupted() override;
private:
  double speed;
};
