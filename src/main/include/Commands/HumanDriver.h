#pragma once

#include <Commands/Command.h>
#include "../Robot.h"

class HumanDriver : public frc::Command {
 public:
  HumanDriver();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
 private:
  XboxController& controller = Robot::m_oi.GetController();
};
