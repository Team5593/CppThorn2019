/*
Title: Hatch Panel Subsystem
Desc: A subsystem for control of the hatch panel mechanism
*/

#pragma once

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include <PWMVictorSPX.h>

class HatchPanelSubsystem : public frc::Subsystem {
 public:
  HatchPanelSubsystem();
  DoubleSolenoid dispenser{0, 1};
  PWMVictorSPX motorPitch{2};
  void InitDefaultCommand() override;
 private:
};
