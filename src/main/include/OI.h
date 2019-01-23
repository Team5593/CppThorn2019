/*
Title: Operator Interface
Desc: Mapping and configuration of controllers
*/

#pragma once

#include <XboxController.h>
#include <Buttons/JoystickButton.h>
#include <Commands/CommandGroup.h>

class OI {
 public:
  OI();

  XboxController& GetController();
 private:
  XboxController controller{0};

  JoystickButton button_a{&controller, 1};
  JoystickButton button_b{&controller, 2};
  JoystickButton button_x{&controller, 3};
  JoystickButton button_y{&controller, 4};
  JoystickButton button_start{&controller, 8};
  JoystickButton button_select{&controller, 7};

  CommandGroup dispenseHatchPanel;
};
