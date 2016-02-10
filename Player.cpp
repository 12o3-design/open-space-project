#include "Player.h"

Player::Player(DrawComponent* drawComponent)
{
  printf("In player constructor.\n");
  drawComponent_ = drawComponent;
}

Player::~Player()
{

}

void Player::setup()
{
  printf("Attempting to load texture.\n");
  texID_ = drawComponent_->load("test.png");
}

void Player::update()
{

}

void Player::draw()
{
  drawComponent_->draw(texID_, 100, 100, 80, 80);
}
