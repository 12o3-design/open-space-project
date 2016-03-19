#ifndef PLAYERCOMMAND_H
#define PLAYERCOMMAND_H

#include "Command.h"

class PlayerTurnLeft : public Command
{
public:
  virtual void execute (Entity* entity);
  virtual void release (Entity* entity);
private:

};

class PlayerTurnRight : public Command
{
public:
  virtual void execute (Entity* entity);
  virtual void release (Entity* entity);
};

class PlayerAccel : public Command
{
public:
  virtual void execute (Entity* entity);
  virtual void release (Entity* entity);
};

class DefaultCommand : public Command
{
public:
  virtual void execute (Entity* entity);
  virtual void release (Entity* entity);
};

#endif
