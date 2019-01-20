/*
Title: Hatch Panel Subsystem
Desc: A subsystem for control of the hatch panel mechanism
*/

#pragma once

#include <Commands/Subsystem.h>

class HatchPanelSubsystem : public frc::Subsystem {
 public:
  HatchPanelSubsystem();
  void InitDefaultCommand() override;
 private:
};
