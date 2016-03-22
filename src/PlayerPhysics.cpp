#include "PlayerPhysics.h"
#include <SDL2/SDL.h>
#include <math.h>
#define PI 3.1415926535897

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

void PlayerPhysics::setVelocity(double xComp, double yComp)
{
  velocity.xComp = xComp;
  velocity.yComp = yComp;
}

void PlayerPhysics::setAccel(double xComp, double yComp)
{
  accel.xComp = xComp;
  accel.yComp = yComp;
}

void PlayerPhysics::setAccel(double accelRate)
{
  this->accelRate = accelRate;
}

void PlayerPhysics::update()
{
  accel.xComp = accelRate * (sin(theta * (PI/180)));
  accel.yComp = accelRate * (cos(theta * (PI/180))) * -1;
  // on each update step,velocity increases by accel
  velocity.xComp += accel.xComp;
  velocity.yComp += accel.yComp;
  // on each update step, position uncreases by velocity
  x += velocity.xComp;
  y += velocity.yComp;
  if (x > 1280)
  {
    x = x - 1280;
  }

  if (y > 800)
  {
    y = y - 800;
  }

  if (x < 0)
  {
    x = x + 1280;
  }

  if (y < 0)
  {
    y = y + 800;
  }
  // on each update step, rotate by rotate rotateRate
  theta = (theta + rotateRate);

  if (theta  > 359)
  {
    theta = (theta - 360);
  }
  if (theta  < 0)
  {
    theta = (theta + 360);
  }
}
