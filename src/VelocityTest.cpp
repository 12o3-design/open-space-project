#include "Vector.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  Vector testVel = Vector();

  testVel.setMagnitude(1);
  testVel.setDirection(6.28);

  std::cout << "x comp: " + std::to_string(testVel.getXComp()) + "\ny comp: " + std::to_string(testVel.getYComp()) << std::endl;
  return 0;
}
