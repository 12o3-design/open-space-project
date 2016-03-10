#ifndef ENTITY_H
#define ENTITY_H

// ABC from which all game entities are directly derived
class Entity
{
public:

  void setEntityID(int entityID);
  int getEntityID();

  virtual void setup() =0;
  virtual void update() =0;
  virtual void draw() =0;


// game behaviors
  virtual void accelerate() =0;
  virtual void rotateLeft() =0;
  virtual void rotateRight() =0;

private:
  int entityID_;
};

#endif
