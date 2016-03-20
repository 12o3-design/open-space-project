#include "Player.h"
#include "Vect.h"
#include <math.h>

#define PI 3.1415926535897

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

void Player::accelerate(double rate)
{
  Vect* newAccel = new Vect();
  double theta = playerPhys->getTheta();
  newAccel->xComp = rate * (sin(theta * (PI/180)));
  newAccel->yComp = rate * (cos(theta * (PI/180))) * -1;

  playerPhys->setAccel(vectorSum(newAccel, playerPhys->getAccel()));

  delete newAccel;
}

void Player::rotateLeft(int rate)
{
 playerPhys->setRotate(-rate);
}

void Player::rotateRight(int rate)
{
  playerPhys->setRotate(rate);
}

void Player::draw()
{
  drawComponent_->draw(texID_, playerPhys->getX(), playerPhys->getY(), 80, 80, playerPhys->getTheta(), NULL);
}
