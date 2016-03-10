#include <SDL2/SDL.h>
#include <stdio.h>
#include "Game.h"
#include "DrawComponent.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT  = 480;

const int SCREEN_FPS = 60;
const int SCREEN_TICKS_PER_FRAME = 1000 / SCREEN_FPS;

int main (int argc, char* argv[])
{
  Game* theGame = new Game();

  if(theGame->setup("Open Space", 100,100,SCREEN_WIDTH,SCREEN_HEIGHT,0))
  {
    while (theGame->isRunning())
    {
      int startTime = SDL_GetTicks();
      theGame->handleInput();
      theGame->update();
      theGame->draw();

      // wait for framerate
      int frameTicks = SDL_GetTicks() - startTime;
      if (frameTicks < SCREEN_TICKS_PER_FRAME)
      {
        SDL_Delay(SCREEN_TICKS_PER_FRAME - frameTicks);
      }
    }
  }
  else
  {
    delete theGame;
    SDL_Quit();
    return 1;
  }

  delete theGame;
  SDL_Quit();

  return 0;
}
