#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

class DrawComponent
{
public:
  DrawComponent(SDL_Renderer* renderer);
  ~DrawComponent();

  int load(char* texName);
  void draw(int texID, int x, int y, int w, int h);


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
