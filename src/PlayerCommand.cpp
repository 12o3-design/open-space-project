#include "PlayerCommand.h"
#include "PlayerPhysics.h"
#include <stdio.h>

/* player turn left */
void PlayerTurnLeft::execute(Entity* entity)
{
  entity->rotateLeft(5);
}

void PlayerTurnLeft::release(Entity* entity)
{
  entity->rotateLeft(0);
}

/* Player turn right */
void PlayerTurnRight::execute(Entity* entity)
{
  entity->rotateRight(5);
}

void PlayerTurnRight::release(Entity* entity)
{
  entity->rotateRight(0);
}

/* player accelerate */
void PlayerAccel::execute(Entity* entity)
{
  entity->accelerate(.1);
}

void PlayerAccel::release(Entity* entity)
{
  entity->accelerate(0);
}

/* default command */
void DefaultCommand::execute(Entity* entity)
{

}

void DefaultCommand::release(Entity* entity)
{

}
