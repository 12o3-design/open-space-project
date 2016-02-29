#ifndef PLAYERINPUT_H
#define PLAYERINPUT_H

#include "Command.h"

class PlayerInput : public InputComponent
{
public:
  Command* handleInput();

private:

};

#endif
