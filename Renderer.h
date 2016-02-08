#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

class Renderer
{
public:
  Renderer();
  ~Renderer();

  SDL_Texture* getTexture(int TextureID);
  int load(char* texName);
  int addTexture(SDL_Texture* texture);

private:
  // number of textures held in Renderer
  const int size_ = 64;
  // array of stored textures
  SDL_Texture* textures_;
  // allow only one to be instantiated
  static bool inst_;

}
