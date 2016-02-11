#include "Player.h"

Player::Player(DrawComponent* drawComponent)
{
  drawComponent_ = drawComponent;
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

}

void Player::draw()
{
  drawComponent_->draw(texID_, 100, 100, 80, 80);
}
