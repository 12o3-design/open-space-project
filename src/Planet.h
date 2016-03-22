#ifndef PLANET_H
#define PLANET_H

#include "Color.h"

class Planet : public Entity
{
public:
  Planet();
  ~Planet();

  virtual void setup();
  virtual void update();
  virtual void draw();

  // game behaviors

private:
  int radius;
  Color color;
};

#endif
