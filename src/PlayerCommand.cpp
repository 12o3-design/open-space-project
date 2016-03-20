#include "PlayerCommand.h"
#include "PlayerPhysics.h"
#include <stdio.h>

/* player turn left */
void PlayerTurnLeft::execute(Entity* entity)
{
  printf("Turn left\n");
  entity->rotateLeft(5);
}

void PlayerTurnLeft::release(Entity* entity)
{
  entity->rotateLeft(0);
}

/* Player turn right */
void PlayerTurnRight::execute(Entity* entity)
{
  printf("Turn right\n");
  entity->rotateRight(5);
}

void PlayerTurnRight::release(Entity* entity)
{
  entity->rotateRight(0);
}

/* player accelerate */
void PlayerAccel::execute(Entity* entity)
{
  printf("Accelerate\n");
  entity->accelerate(.25);
}

void PlayerAccel::release(Entity* entity)
{
  printf("End accelerate\n");
  entity->accelerate(0);
}

/* default command */
void DefaultCommand::execute(Entity* entity)
{
  printf("empty command\n");
}

void DefaultCommand::release(Entity* entity)
{

}
