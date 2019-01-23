#include "OI.h"

#include <WPILib.h>

#include "Commands/HatchPanel.h"
#include "Commands/Move.h"

OI::OI() {
  
  dispenseHatchPanel.AddSequential(new Move(1.3, 0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
  dispenseHatchPanel.AddSequential(new Move(0.5, 0));
  dispenseHatchPanel.AddSequential(new Move(0.5, -0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
	button_a.WhenPressed(&dispenseHatchPanel);
}

XboxController& OI::GetController()
{
  return controller;
}