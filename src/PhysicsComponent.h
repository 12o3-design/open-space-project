#ifndef PHYSICSCOMPONENT_H
#define PHYSICSCOMPONENT_H

#include <stdio.h>

class PhysicsComponent
{
public:
  const static double GRAV_CONST = 6.2;
  int x;
  int y;
  double mass;

  virtual void update() = 0;

  void setX(int x) { this->x = x; }
  void setY(int y) { this->y = y; }
  void setMass(double mass) { this->mass = mass; }

  int getX() { return x; }
  int getY() { return y; }
  double getMass() { return mass; }

private:

};

#endif
