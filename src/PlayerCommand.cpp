#include "PlayerCommand.h"
#include "PlayerPhysics.h"
#include <stdio.h>

void PlayerTurnLeft::execute(Entity* entity)
{
  printf("Turn left\n");
}

void PlayerTurnRight::execute(Entity* entity)
{
  printf("Turn right\n");
}

void PlayerAccel::execute(Entity* entity)
{
  printf("Accelerate\n");
  entity->accelerate();
}

void PlayerStopAccel::execute(Entity* entity)
{
  printf("End Accel\n");
  entity->stopAccel();
}

void DefaultCommand::execute(Entity* entity)
{
  printf("empty command\n");
}
