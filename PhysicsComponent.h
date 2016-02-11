#ifndef PHYSICSCOMPONENT_H
#define PHYSICSCOMPONENT_H

#include <stdio.h>

class PhysicsComponent
{
public:
  const static double GRAV_CONST = 6.2;
  double x_;
  double y_;
  double mass_;

  virtual void update() = 0;

private:

};

#endif
