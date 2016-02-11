// A class containing velocity information: direction and magnitiude

#ifndef VELOCTY_H
#define VELOCITY_H

class Velocity
{
public:
  Velocity();
  Velocity(double direction, double magnitude);

  void setDirection(double direction) { this->direction = direction; }
  void setMagnitude(double magnitude) { this->magnitude = magnitude; }

  double getDirection() { return direction; }
  double getMagnitude() { return magnitude; }

private:
  // contains a direction in degrees between 0 and 364 (0 == north)
  double direction;
  double magnitude;
};

#endif
