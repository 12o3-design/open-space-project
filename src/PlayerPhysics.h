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
  void setVelocity(double xComp, double yComp);
  void setAccel(Vect accel) { this->accel = accel; }
  void setAccel(double xComp, double yComp);
  void setAccel(double accelRate);
  void setRotate(int rotate) { this->rotateRate = rotate; }

  Vect* getVelocity() { return &velocity; }
  Vect* getAccel() { return &accel; }

  double getTheta() { return theta; }

private:

  Vect velocity;
  Vect accel;

  int rotateRate;
  double accelRate;

  double theta;

};
#endif
