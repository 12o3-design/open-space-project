// A class containing velocity information: direction and magnitiude

#ifndef VECTOR_H
#define VECTOR_H

class Velocity
{
public:
  Vector() :
  direction(0),
  magnitude(0),
  xComp(0),
  yComp(0)
  {}

  Vector(double direction, double magnitude) :
  direction(direction),
  magnitude(magnitude)
  {}

  void setDirection(double direction);
  void setMagnitude(double magnitude);

  double getDirection() { return direction; }
  double getMagnitude() { return magnitude; }

  double getXComp() { return xComp; }
  double getYComp() { return yComp; }

  //Overload + operator to sum vectors

private:
  // contains a direction in degrees between 0 and 364 (0 == north)
  double direction;
  double magnitude;

  // x component and y component of vector
  double xComp;
  double yComp;

  void updateCartesianComps();

  double sin(double n);
  double cos(double n);
};

#endif
