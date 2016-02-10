#include <SDL2/SDL.h>
#include <stdio.h>
#include "Game.h"
#include "DrawComponent.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT  = 480;

int main (int argc, char* argv[])
{
  Game* theGame = new Game();
  if(theGame->setup("Open Space", 100,100,SCREEN_WIDTH,SCREEN_HEIGHT,0))
  {
    while (theGame->isRunning())
    {
      theGame->handleInput();
      theGame->update();
      theGame->draw();
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
