#include "OI.h"

#include <WPILib.h>

OI::OI() {
	// button_a.WhenPressed(new Command());
}

XboxController& OI::GetController()
{
  return controller;
}