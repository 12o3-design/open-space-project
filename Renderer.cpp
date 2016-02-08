#include "Renderer.h"

Renderer::inst_ = false;
Renderer::Renderer()
{
  if (!inst_)
  {
    inst_ = true;
    textures_ = new SDL_Texture* [size_];
  }
}

Renderer::~Renderer()
{
  delete textures_;
  inst_ = false;
}

int Renderer::AddTexture(SDL_Texture* texture)
{
  // walks array, inserts texture at first empty slot.
  // returns index of texture or -1 if not placed
  for (int i = 0; i < size_; i++)
  {
    if (textures_[i] == NULL)
    {
      textures_[i] = texture;
      return i;
    }
  }
  return UNABLE_TO_ADD;
}

int Renderer::load(char* texName)
{
  SDL_Surface* tempSurface = IMG_Load(texName.c_str());
  if (tempSurface == 0)
  {
    return TEX_NOT_FOUND;
  }
  SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer_, tempSurface);
  SDL_FreeSurface(tempSurface);

  if (texture != 0)
  {
    return addTexture(texture);
  }
}
