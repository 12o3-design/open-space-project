#include "Vector.h"
#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
  Vector testVel = Vector();

  testVel.setMagnitude(1);
  testVel.setDirection(2 * M_PI);

  std::cout << "x comp: " + std::to_string(testVel.getXComp()) + "\ny comp: " + std::to_string(testVel.getYComp()) << std::endl;
  return 0;
}
