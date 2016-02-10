#include "DrawComponent.h"
#include <stdio.h>

int main(int argc, char*[] argv)
{
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
  {
    printf("SDL could not initialize");
    return -1;
  }
  SDL_Window* window = SDL_CreateWindow(
    "Render Test",
    100,
    100,
    640,
    480,
    0
  );
  if (window == NULL)
  {
    printf("Window not initialized");
    return -1;
  }
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
  if (renderer == NULL)
  {
    printf("Renderer not initialized");
    return -1;
  }
  SDL_SetRenderDrawColor(renderer, 255,255,255,255);


  DrawComponent theDrawer = new DrawComponent(renderer);
  int ID = theDrawer.load("test.png");
  theDrawer.draw(ID, 100, 100, 100, 100);

  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);

  while(true)
  {
    
  }



  return 0;
}
