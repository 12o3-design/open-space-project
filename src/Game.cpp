#include "Game.h"
#include "Player.h"
#include "DrawComponent.h"
#include <stdio.h>
#include <SDL2/SDL.h>

bool Game::inst_ = false;

Game::Game()
{
  if (!inst_)
  {
    window_ = NULL;
    renderer_ = NULL;
    entities_ = new Entity*[numEntities_];
    for (int i = 0; i < numEntities_; i++)
    {
      entities_[i] = NULL;
    }
    running_ = false;
    inst_ = true;
  }
}
Game::~Game()
{
  delete drawComponent_;
  delete[] entities_;
  SDL_DestroyWindow(window_);
}

bool Game::setup(const char* title, int xPos, int yPos, int width, int height, int flags)
{
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
  {
    printf("SDL could not initialize");
    return false;
  }
  else
  {
    window_ = SDL_CreateWindow(
      title,
      xPos,
      yPos,
      width,
      height,
      flags
    );
    if (window_ == NULL)
    {
      printf("SDL Window not initialized");
      return false;
    }
    else
    {
      renderer_ = SDL_CreateRenderer(window_, -1, 0);
      if (renderer_ == NULL)
      {
        printf("SDL Renderer not initialized");
        return false;
      }

      drawComponent_ = new DrawComponent(renderer_);

      //test code pls delete

      SDL_SetRenderDrawColor(renderer_, 0,0,0,255);
      running_ = true;

      printf("making the player.\n");
      entities_[0] = new Player(drawComponent_);
      entities_[0]->setup();
      printf("player made.\n");
      return true;
    }
  }
}
void Game::handleInput()
{
  SDL_Event event;
  if (SDL_PollEvent(&event))
  {
    if ( event.type == SDL_QUIT )
    {
      running_ = false;
    }
    else if (event.type == SDL_KEYDOWN)
    {
      switch( event.key.keysym.sym)
      {
        case SDLK_w:
          printf("Pressed W\n");
        default:
          break;
      }
    }
  }
}

void Game::update()
{

}

void Game::draw()
{
  SDL_RenderClear(renderer_);

  for (int i = 0; i < numEntities_; i++)
  {
    if (entities_[i] != NULL)
    {
      entities_[i]->draw();
    }
  }

  SDL_RenderPresent(renderer_);
}

void Game::clean()
{

}
