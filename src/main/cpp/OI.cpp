#include "OI.h"

#include <WPILib.h>

#include "Commands/HatchPanel.h"
#include "Commands/Move.h"

OI::OI() {
	button_a.WhenPressed(new HatchPanel());
  button_b.WhenPressed(new Move(0.3, 0.4));
}

XboxController& OI::GetController()
{
  return controller;
}