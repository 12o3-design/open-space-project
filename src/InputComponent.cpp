#include "InputComponent.h"

InputComponent::InputComponent()
{
  key_w = new PlayerAccel();
  key_a = new PlayerTurnLeft();
  key_d = new PlayerTurnRight();
  defaultCommand = new DefaultCommand();
}

InputComponent::~InputComponent()
{
  delete key_w;
  delete key_a;
  delete key_d;
  delete defaultCommand;
}


Command* InputComponent::handleInput(SDL_Event event)
{
  switch( event.key.keysym.sym)
  {
    case SDLK_w:
      return key_w;
    case SDLK_a:
      return key_a;
    case SDLK_d:
      return key_d;
    default:
      return defaultCommand;
      break;
  }
}
