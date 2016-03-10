#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Entity.h"
#include "DrawComponent.h"
#include "PlayerPhysics.h"

class Player : public Entity
{
public:
  Player(DrawComponent* drawComponent);
  ~Player();

  void update();
  void draw();
  void setup();

  void setX(int x) { x_ = x; }
  void setY(int y) { y_ = y; }

  int getX() { return x_; }
  int getY() { return y_; }

// game behaviors
  virtual void accelerate();
//  virtual void stopAccel();
  virtual void rotateLeft();
  virtual void rotateRight();

private:
  DrawComponent* drawComponent_;

  PlayerPhysics* playerPhys;

  std::string texName_ = "../assets/player.png";
  int texID_;
  int x_;
  int y_;
};

#endif
