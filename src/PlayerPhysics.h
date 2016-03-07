#ifndef PLAYERPHYSICS_H
#define PLAYERPHYSICS_H

#include "PhysicsComponent.h"
#include "Vect.h"
#include <stdio.h>

class PlayerPhysics : public PhysicsComponent
{
public:

  PlayerPhysics();
  PlayerPhysics(int x, int y);
  ~PlayerPhysics();

  void setup();
  void update();

  void setVelocity(Vect velocity) { this->velocity = velocity; }
  void setVelocity(int xComp, int yComp);
  void setAccel(Vect accel) { this->accel = accel; }
  void setAccel(int xComp, int yComp);

  Vect* getVelocity() { return &velocity; }
  Vect* getAccel() { return &accel; }

private:

  Vect velocity;
  Vect accel;

  double theta;

};
#endif
