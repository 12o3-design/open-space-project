#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include "DrawComponent.h"
#include "Player.h"

class Game
{
public:
  Game();
  ~Game();

  bool setup(const char* title, int xPos, int yPos, int width, int height, int flags);
  void handleInput();
  void update();
  void draw();

  void clean();

  bool isRunning(){ return running_; }

private:
  static bool inst_;
  bool running_;
  const int numEntities_ = 10;

  SDL_Window* window_;
  SDL_Renderer* renderer_;

  DrawComponent* drawComponent_;

  Entity** entities_;

};

#endif
