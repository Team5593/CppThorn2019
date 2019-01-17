#pragma once

#include <Commands/Subsystem.h>

#include <PWMVictorSPX.h>
#include <Drive/DifferentialDrive.h>

class DriveTrain : public frc::Subsystem {
 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void arcadeDrive(double move, double angle);
 private:
  PWMVictorSPX motorLeft{0};
  PWMVictorSPX motorRight{1};
  DifferentialDrive driveTrain {motorLeft, motorRight};
};
