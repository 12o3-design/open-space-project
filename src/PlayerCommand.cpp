#include "PlayerCommand.h"
#include "PlayerPhysics.h"
#include <stdio.h>

/* player turn left */
void PlayerTurnLeft::execute(Entity* entity)
{
  printf("Turn left\n");
  entity->rotateLeft();
}

void PlayerTurnLeft::release(Entity* entity)
{

}

/* Player turn right */
void PlayerTurnRight::execute(Entity* entity)
{
  printf("Turn right\n");
}

void PlayerTurnRight::release(Entity* entity)
{

}

/* player accelerate */
void PlayerAccel::execute(Entity* entity)
{
  printf("Accelerate\n");
  entity->accelerate();
}

void PlayerAccel::release(Entity* entity)
{
  printf("End accelerate\n");
}

/* default command */
void DefaultCommand::execute(Entity* entity)
{
  printf("empty command\n");
}

void DefaultCommand::release(Entity* entity)
{
  
}
