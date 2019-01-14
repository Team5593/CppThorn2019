/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <XboxController.h>
#include <Buttons/JoystickButton.h>

class OI {
 public:
  OI();
  double getY();
  double getX();
  bool getTrigger();

  XboxController& GetController();
 private:
  XboxController controller{0};

  JoystickButton button_a{&controller, 1};
  JoystickButton button_b{&controller, 2};
  JoystickButton button_x{&controller, 3};
  JoystickButton button_y{&controller, 4};
  JoystickButton button_start{&controller, 8};
  JoystickButton button_select{&controller, 7};
};
