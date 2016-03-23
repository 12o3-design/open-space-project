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

  void setColor(Color color) { this->color = color; }
  void setColor (UInt8 r, UInt8 g, UInt8 b, UInt8 a);
  void setRadius(int radius) { this->radius = radius; }

  // game behaviors

private:
  int radius;

  int xPos;
  int yPos;
  
  Color color;
  std::string texName = "../assets/testplanet.png";

};

#endif
