#ifndef ENTITY_H
#define ENTITY_H

#include <string>

// ABC from which all game entities are directly derived
class Entity
{
public:

  

  void setEntityID(int entityID);
  int getEntityID();

  virtual void setup() =0;
  virtual void update() =0;

// game behaviors
  virtual void accelerate(double rate) {}
  virtual void rotateLeft(int rate) {}
  virtual void rotateRight(int rate) {}

protected:
  void draw( );

private:
  int entityID_;
  DrawComponent* drawComp;

};

#endif
