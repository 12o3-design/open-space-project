#ifndef PHYSICSCOMPONENT_H
#define PHYSICSCOMPONENT_H

#include <stdio.h>

class PhysicsComponent
{
public:
  const static double GRAV_CONST = 6.2;
  int x_;
  int y_;
  double mass_;

  virtual void update() = 0;

  void setX(int x) { x_ = x; }
  void setY(int y) { y_ = y; }
  void setMass(double mass) { mass_ = mass; }

  int getX() { return x_; }
  int getY() { return y_; }
  double getMass() { return mass_; }

private:

};

#endif
