#include "DrawComponent.h"
#include <stdio.h>

int main(int argc, char* argv[])
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
    printf("Window not initialized\n");
    return -1;
  }
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
  if (renderer == NULL)
  {
    printf("Renderer not initialized\n");
    return -1;
  }
  SDL_SetRenderDrawColor(renderer, 255,255,255,255);


  DrawComponent* theDrawer = new DrawComponent(renderer);
  int ID = theDrawer->load("test.png");
  printf("Texture loaded: %d \n", ID);

  SDL_RenderClear(renderer);

  theDrawer->draw(ID, 100, 100, 100, 100);

  SDL_RenderPresent(renderer);

  SDL_Delay(2000);

  SDL_Quit();



  return 0;
}
