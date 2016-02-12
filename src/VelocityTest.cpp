#include "Velocity.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  Velocity testVel = Velocity();

  std::cout << "Magnitude: " + std::to_string(testVel.getMagnitude()) + "\nDirection: " + std::to_string(testVel.getDirection()) << std::endl;

  testVel.setMagnitude(2.5);
  testVel.setDirection(83.45);

  std::cout << "\nMagnitude: " + std::to_string(testVel.getMagnitude()) + "\nDirection: " + std::to_string(testVel.getDirection()) << std::endl;
  return 0;
}
