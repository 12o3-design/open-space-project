#include "DrawComponent.h"

bool DrawComponent::inst_ = false;

DrawComponent::DrawComponent(SDL_Renderer* renderer)
{
  if (!inst_)
  {
    inst_ = true;
    textures_ = new SDL_Texture* [size_];
    renderer_ = renderer;
  }
}

DrawComponent::~DrawComponent()
{
  delete [] textures_;
  inst_ = false;
}

int DrawComponent::addTexture(SDL_Texture* texture)
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

int DrawComponent::load(char* texName)
{
  SDL_Surface* tempSurface = IMG_Load(texName);
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
  // if you get here there's a problem
  return -1;
}

void DrawComponent::draw(int texID, int x, int y, int w, int h)
{
  // only try to draw if texture present
  if (textures_[texID] != NULL)
  {
    printf("Drawing here");
    //TODO: implement SDL Drawing
  }
  else
  {
    printf("Texture not present");
  }
}
