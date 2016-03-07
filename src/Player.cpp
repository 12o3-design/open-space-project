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

void Player::accelerate()
{
  Vect* newAccel = new Vect();
  newAccel->xComp = 0;
  newAccel->yComp = 5;


  playerPhys->setAccel(vectorSum(newAccel, playerPhys->getAccel()));

  delete newAccel;
}

void Player::stopAccel()
{

}

void Player::draw()
{
  drawComponent_->draw(texID_, playerPhys->getX(), playerPhys->getY(), 80, 80, 0, NULL);
}
