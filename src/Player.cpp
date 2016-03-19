#include "Player.h"
#include "Vect.h"
#include <math.h>

#define PI 3.14159265

Player::Player(DrawComponent* drawComponent)
{
  drawComponent_ = drawComponent;
  playerPhys = new PlayerPhysics(100, 100);
}

Player::~Player()
{

}

void Player::setup()
{
  texID_ = drawComponent_->load(texName_);
}

void Player::update()
{
 playerPhys->update();
}

void Player::accelerate()
{
  Vect* newAccel = new Vect();
  int theta = playerPhys->getTheta();
  int accelRate = 5;
  newAccel->xComp = accelRate * (sin(theta * (180/PI))) * -1;
  newAccel->yComp = accelRate * (cos(theta * (180/PI))) * -1;

  playerPhys->setAccel(vectorSum(newAccel, playerPhys->getAccel()));

  delete newAccel;
}

void Player::rotateLeft()
{
 playerPhys->setRotate(-5);
}

void Player::rotateRight()
{

}

void Player::draw()
{
  drawComponent_->draw(texID_, playerPhys->getX(), playerPhys->getY(), 80, 80, playerPhys->getTheta(), NULL);
}
