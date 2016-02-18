#ifndef PLAYERPHYSICS_H
#define PLAYERPHYSICS_H

#include "PhysicsComponent.h"
#include "Vect.h"
#include <stdio.h>

class PlayerPhysics : public PhysicsComponent
{
public:

  void update();

  void setVelocity(Vect velocity) { this->velocity = velocity; }
  void setAcceleration(Vector acceleration) { acceleration_ = acceleration; }

  Vector getVelocity() { return velocity_; }
  Vector getAcceleration() { return acceleration_; }

private:

  Vect velocity;
  Vect acceleration_;

};
#endif
