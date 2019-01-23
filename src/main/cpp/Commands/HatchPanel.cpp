#include "Commands/HatchPanel.h"

HatchPanel::HatchPanel() {
  Requires (&Robot::hatchPanelSubsystem);
}

void HatchPanel::Initialize() {
  if (Robot::hatchPanelSubsystem.dispenser.Get() == DoubleSolenoid::Value::kForward) {
    Robot::hatchPanelSubsystem.dispenser.Set(DoubleSolenoid::Value::kReverse);
  } else {
    Robot::hatchPanelSubsystem.dispenser.Set(DoubleSolenoid::Value::kForward);
  }
}

void HatchPanel::Execute() {}

bool HatchPanel::IsFinished() { return true; }

void HatchPanel::End() {}

void HatchPanel::Interrupted() {}
