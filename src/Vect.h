// A class containing velocity information and some
// helper functions to convert between polar and
// cartesian coordinates.

#ifndef VECT_H
#define VECT_H

struct Vect
{
  double xComp;
  double yComp;

};

inline Vect vectorSum(Vect* vecA, Vect* vecB)
{
  Vect vecSum;
  vecSum.xComp = vecA->xComp + vecB->xComp;
  vecSum.yComp = vecA->yComp + vecB->yComp;
  return vecSum;
}



#endif
