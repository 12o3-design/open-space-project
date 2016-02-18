#include "PlayerPhysics.h"

PlayerPhysics::PlayerPhysics()
{

}

PlayerPhysics::PlayerPhysics(int x, int y)
{
  this->x = x;
  this->y = y;
}

PlayerPhysics::~PlayerPhysics()
{

}

void PlayerPhysics::update()
{
  // on each update step,velocity increases by accel
  velocity.xComp += accel.xComp;
  velocity.yComp += accel.yComp;
  // on each update step, position uncreases by velocity
  x += velocity.xComp;
  y += velocity.yComp;
}
