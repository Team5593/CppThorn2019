#include "OI.h"

#include <WPILib.h>

#include "Commands/HatchPanel.h"
#include "Commands/Move.h"
#include "Commands/UltraMove.h"

#include "Commands/HatchPitch.h"

OI::OI() {

  dispenseHatchPanel.AddSequential(new UltraMove(52, 0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
  dispenseHatchPanel.AddSequential(new Move(0.5, 0));
  dispenseHatchPanel.AddSequential(new Move(0.5, -0.5));
  dispenseHatchPanel.AddSequential(new HatchPanel());
  button_a.WhileHeld(&dispenseHatchPanel);

  pitchHatch.AddSequential(new UltraMove(52, 0.5));
  button_y.WhileHeld(&pitchHatch);

}


XboxController& OI::GetController()
{
  return controller;
}