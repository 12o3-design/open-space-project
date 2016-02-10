Player::Player(DrawComponent* drawComponent)
{
  drawComponent_ = drawComponent;
  texID_ = drawComponent_->load(texName_);
}

Player::~Player()
{

}

void Player::update()
{

}

void Player::draw()
{
  drawComponent_->draw(texID_, 100, 100, 80, 80);
}
