#include "InputComponent.h"

void InputComponent::handleInput(SDL_Event event)
{
  switch( event.key.keysym.sym)
  {
    case SDLK_w:
      printf("Pressed W\n");
    default:
      break;
  }
}
