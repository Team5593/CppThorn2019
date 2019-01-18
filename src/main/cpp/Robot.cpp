#include "Robot.h"

#include <CameraServer.h>

DriveTrainSubsystem Robot::driveTrainSubsystem;
HatchPanelSubsystem Robot::hatchPanelSubsystem;
OI Robot::m_oi;

void Robot::RobotInit() {
  CameraServer::GetInstance()->StartAutomaticCapture();
}

void Robot::RobotPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
