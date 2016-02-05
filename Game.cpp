#include "Game.h"
#include <stdio.h>
#include <SDL2/SDL.h>

bool Game::inst_ = false;

Game::Game()
{
  if (!inst_)
  {
    window_ = NULL;
    renderer_ = NULL;
    running_ = false;
    inst_ = true;
  }
}
Game::~Game()
{
  SDL_DestroyWindow(window_);
}

void Game::setup(const char* title, int xPos, int yPos, int width, int height, int flags)
{
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
  {
    printf("SDL could not initialize");
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
    }
    else
    {
      renderer_ = SDL_CreateRenderer(window_, -1, 0);
      if (renderer_ == NULL)
      {
        printf("SDL Renderer not initialized");
      }

      //test code pls delete
      else
      {
        SDL_SetRenderDrawColor(renderer_, 255,255,255,255);
        running_ = true;
        SDL_Delay(5000);
        running_ = false;
      }
    }
  }
}
void Game::handleInput()
{

}

void Game::update()
{

}
void Game::draw()
{

}

void Game::clean()
{

}
