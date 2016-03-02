#ifndef INPUTCOMPONENT_H
#define INPUTCOMPONENT_H

#include <SDL2/SDL.h>
#include "Command.h"

class InputComponent
{
public:

  virtual void handleInput(SDL_Event event);

private:

};

#endif
