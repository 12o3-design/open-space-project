#ifndef DRAWCOMPONENT_H
#define DRAWCOMPONENT_H

#include <string>

#include <SDL2/SDL.h>
#include "Vect.h"
#include "Color.h"

#ifdef __APPLE__
#include <SDL2_image/SDL_image.h>
#elif __linux__
#include <SDL2/SDL_image.h>
#endif

class DrawComponent
{
public:
  DrawComponent(SDL_Renderer* renderer);
  ~DrawComponent();

  int load(std::string texName);
  // overloaded draw function for planets and sprites
  void draw(int texID, int x, int y, int width, int height, double rotate, SDL_Point* center);
  void draw(int x, int y, int radius, Color color);

  void drawVelVector(int x, int y, Vect* vel);
  void drawAccelVector(int x, int y, Vect* accel);


private:
  SDL_Renderer* renderer_;
  enum returnValues{TEX_NOT_FOUND, UNABLE_TO_ADD};
  int addTexture(SDL_Texture* texture);
  // number of textures held in Renderer
  const int size_ = 64;
  // array of stored textures
  SDL_Texture** textures_;
  // allow only one to be instantiated
  static bool inst_;

};

#endif
