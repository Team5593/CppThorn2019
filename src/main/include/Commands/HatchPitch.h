/*
Title: Human Driver
Description: Allows the driver to control the drive-train of the robot.
*/

#pragma once

#include <Commands/Command.h>
#include "../Robot.h"

class HatchPitch : public frc::Command {
 public:
  HatchPitch();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
 private:
  XboxController& controller = Robot::m_oi.GetController();
};
