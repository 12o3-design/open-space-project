#include "PlayerCommand.h"
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
}

void DefaultCommand::execute(Entity* entity)
{
  printf("empty command\n");
}
