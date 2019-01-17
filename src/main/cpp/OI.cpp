/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() 
{
  // Process operator interface input here.

}

/*double OI::getY()
{
  return joystick.GetRawAxis(1);
}

double OI::getX()
{
  return joystick.GetRawAxis(4);
}

bool OI::getTrigger()
{
  return (joystick.GetRawAxis(3)>0.9);
}*/

XboxController& OI::GetController()
  {
  return controller;
  }