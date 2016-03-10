#include "PlayerPhysics.h"

PlayerPhysics::PlayerPhysics()
{
  setup();
}

PlayerPhysics::PlayerPhysics(int x, int y)
{
  this->x = x;
  this->y = y;

  setup();
}

void PlayerPhysics::setup()
{
  setVelocity(0,0);
  setAccel(0,0);
  rotateRate = 0;
  theta = 0;
}

PlayerPhysics::~PlayerPhysics()
{

}

void PlayerPhysics::setVelocity(int xComp, int yComp)
{
  velocity.xComp = xComp;
  velocity.yComp = yComp;
}

void PlayerPhysics::setAccel(int xComp, int yComp)
{
  accel.xComp = xComp;
  accel.yComp = yComp;
}

void PlayerPhysics::update()
{
  // on each update step,velocity increases by accel
  velocity.xComp += accel.xComp;
  velocity.yComp += accel.yComp;
  // on each update step, position uncreases by velocity
  x += velocity.xComp;
  y += velocity.yComp;
  // on each update step, rotate by rotate rotateRate

  if (theta + rotateRate > 359)
  {
    theta = (theta + rotateRate - 360);
  }
  else if (theta + rotateRate < 0)
  {
    theta = (theta + rotateRate + 360);
  }
  else
  {
    theta = (theta + rotateRate);
  }
}
