#include "DrawComponent.h"
#include "Vect.h"
#include <math.h>

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

int DrawComponent::load(std::string texName)
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
  // if you get here there's a problem
  return -1;
}

void DrawComponent::draw(int texID, int x, int y, int width, int height, double rotate, SDL_Point* center)
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

    SDL_RenderCopyEx(renderer_, textures_[texID], &srcRect, &destRect, rotate, center, SDL_FLIP_NONE);
  }
  else
  {
  //  printf("Texture not present\n");
  }
}

void DrawComponent::draw(int x, int y, int radius, Color* color)
{
  // draws planets by making a circle of radius and color
  SDL_SetRenderDrawColor(renderer_, color->red, color->green, color->blue, color->alpha);

}

void DrawComponent::drawVelVector(int x, int y, Vect* vel)
{
  int scale = 4;
  double xScale = scale * vel->xComp;
  double yScale = scale * vel->yComp;
  SDL_SetRenderDrawColor(renderer_, 0xFF, 0x00, 0x00, 0xFF);
  SDL_RenderDrawLine(renderer_, x, y, (x + xScale), (y + yScale) );
  SDL_SetRenderDrawColor(renderer_, 0x00, 0x00, 0x00, 0xFF);
}

void DrawComponent::drawAccelVector(int x, int y, Vect* accel)
{
  int scale = 100;
  double xScale = scale * accel->xComp;
  double yScale = scale * accel->yComp;
  SDL_SetRenderDrawColor(renderer_, 0x00, 0x00, 0xFF, 0xFF);
  SDL_RenderDrawLine(renderer_, x, y, (x + xScale), (y + yScale));
  SDL_SetRenderDrawColor(renderer_, 0x00, 0x00, 0x00, 0xFF);
}
