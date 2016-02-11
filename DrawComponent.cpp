#include "DrawComponent.h"

bool DrawComponent::inst_ = false;

DrawComponent::DrawComponent(SDL_Renderer* renderer)
{
  if (!inst_)
  {
    inst_ = true;
    textures_ = new SDL_Texture* [size_];
    for (int i = 0; i < size_; i++)
    {
      textures_[i] = NULL;
    }
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
      printf("texture added: %d", i);
      return i;
    }
  }
  printf("unable to load texture");
  return UNABLE_TO_ADD;
}

int DrawComponent::load(const char* texName)
{
  printf("drawComponent load.\n");
  SDL_Surface* tempSurface = IMG_Load(texName);
  if (tempSurface == 0)
  {
    printf("Texture not found.\n");
    return TEX_NOT_FOUND;
  }
  
  SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer_, tempSurface);
  SDL_FreeSurface(tempSurface);

  if (texture != 0)
  {
    return addTexture(texture);
  }
  // if you get here there's a problem
  printf("there is a problem.\n");
  return -1;
}

void DrawComponent::draw(int texID, int x, int y, int width, int height)
{
  // only try to draw if texture present
  if (textures_[texID] != NULL)
  {
    SDL_Rect srcRect;
    SDL_Rect destRect;
    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = destRect.w = width;
    srcRect.h = destRect.h = height;
    destRect.x = x;
    destRect.y = y;

    SDL_RenderCopy(renderer_, textures_[texID], &srcRect, &destRect);
  }
  else
  {
  //  printf("Texture not present\n");
  }
}
