#include "OI.h"

#include <WPILib.h>

#include "Commands/HatchPanel.h"

OI::OI() {
	button_a.WhenPressed(new HatchPanel());
}

XboxController& OI::GetController()
{
  return controller;
}