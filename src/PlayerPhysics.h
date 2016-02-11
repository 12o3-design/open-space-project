#ifndef PLAYERPHYSICS_H
#define PLAYERPHYSICS_H

#include "PhysicsComponent.h"
#include <stdio.h>

class PlayerPhysics : public PhysicsComponent
{
public:

  void update();

private:

  double velocity_;

};
#endif
