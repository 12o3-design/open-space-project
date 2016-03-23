#include "Player.h"
#include "Vect.h"

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
  playerPhys->setAccel(rate);
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
  // draws ship
  drawComponent_->draw(texID_, playerPhys->getX(), playerPhys->getY(), 80, 80, playerPhys->getTheta(), NULL);

  // draws vel vector
  drawComponent_->drawVelVector(playerPhys->getX(), playerPhys->getY(), playerPhys->getVelocity());

  // draws accel vector
  drawComponent_->drawAccelVector(playerPhys->getX(), playerPhys->getY(), playerPhys->getAccel());

}
