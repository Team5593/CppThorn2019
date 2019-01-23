#include "OI.h"

#include <WPILib.h>

#include "Commands/HatchPanel.h"
#include "Commands/Move.h"
#include "Commands/UltraMove.h"

OI::OI() {
  dispenseHatchPanel.AddSequential(new UltraMove(52, 0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
  dispenseHatchPanel.AddSequential(new Move(0.5, 0));
  dispenseHatchPanel.AddSequential(new Move(0.5, -0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
  button_a.WhileHeld(&dispenseHatchPanel);
  button_b.WhenPressed(new HatchPanel());
}


XboxController& OI::GetController()
{
  return controller;
}