#ifndef INPUTCOMPONENT_H
#define INPUTCOMPONENT_H

#include <SDL2/SDL.h>
#include "Command.h"
#include "PlayerCommand.h"

class InputComponent
{
public:

  virtual void handleInput(SDL_Event event);

private:

  Command* key_w;
  Command* key_a;
  Command* key_s;
  Command* key_d;
};

#endif
