#include "Vector.h"

void Vector::setDirection(double direction)
{
  this->direction = direction;
  updateCartesianComps();
}

void Vector::setMagnitude(double magnitude)
{
  this->magnitude = magnitude;
  updateCartesianComps();
}

void Vector::updateCartesianComps()
{
  xComp = magnitude * (sin(direction));
  yComp = magnitude * (cos(direction));
}

// Taylor series approximations of trig fns
double Vector::sin(double n)
{
  double n_2 = n*n;
  double n_3 = n * n_2;
  double n_5 = n_3 * n_2;
  double n_7 = n_5 * n_2;

  return (n - (n_3 / 6) + (n_5 / 120) - (n_7 / 5040));
}

double Vector::cos(double n)
{
  double n_2 = n*n;
  double n_4 = n_2 * n_2;
  double n_6 = n_4 * n_2;

  return (1 - (n_2 / 2) + (n_4 / 24) - (n_6 / 720));
}
