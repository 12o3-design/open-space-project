#ifndef PLAYERPHYSICS_H
#define PLAYERPHYSICS_H

#include "PhysicsComponent.h"
#include "Vector.h"
#include <stdio.h>

class PlayerPhysics : public PhysicsComponent
{
public:

  void update();

  void setVelocity(Vector velocity) { velocity_ = velocity; }
  void setAcceleration(Vector acceleration) { acceleration_ = acceleration; }

  Vector getVelocity() { return velocity_; }
  Vector getAcceleration() { return acceleration_; }

private:

  Vector velocity_;
  Vector acceleration_;

};
#endif
