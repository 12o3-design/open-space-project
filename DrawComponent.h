#include <Renderer.h>

class DrawComponent
{
public:
  virtual void draw() = 0;

private:
  int textureID_;
}
