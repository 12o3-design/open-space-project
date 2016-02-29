#ifndef PLAYERCOMMAND_H
#define PLAYERCOMMAND_H

#include "Command.h"

class PlayerTurnLeft : public Command
{
public:
  void execute (Entity& entity);
private:

};

class PlayerTurnRight : public Command
{
  void execute (Entity& entity);
};

class PlayerAccel : public Command
{
  void execute (Entity& entity);
};

#endif
