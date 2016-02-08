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

SDL_Texture* Renderer::GetTexture(int TextureID)
{
  // searches array for texture ID
  if (TextureID < size_)
  {
    // ensure the texture is not null
    if (textures_[TextureID] != NULL)
    {
      return texture_[TextureID];
    }
  }
  // if texture not found or outside bounds, return null
  else
  {
    return NULL;
  }
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
  return -1;
}

int Renderer::load(char* texName)
{
  
}
