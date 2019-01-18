#pragma once

#include <Commands/Command.h>
#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>
#include <Commands/Scheduler.h>

#include "OI.h"
#include "Subsystems/DriveTrainSubsystem.h"
#include "Subsystems/HatchPanelSubsystem.h"

class Robot : public frc::TimedRobot {
 public:
  static DriveTrainSubsystem driveTrainSubsystem;
  static HatchPanelSubsystem hatchPanelSubsystem;
  static OI m_oi;

  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
};
