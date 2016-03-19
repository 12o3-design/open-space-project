#ifndef COMMAND_H
#define COMMAND_H

#include "Entity.h"

class Command
{
public:
  virtual ~Command(){}
  virtual void execute(Entity* entity) = 0;
  virtual void release(Entity* entity) = 0;

};


#endif
