// A class containing velocity information and some
// helper functions to convert between polar and
// cartesian coordinates.

#ifndef VECT_H
#define VECT_H

struct Vect
{
  int xComp;
  int yComp;

};

inline void vectorSum(Vect* vecA, Vect* vecB, Vect* vecSum)
{
  vecSum->xComp = vecA->xComp + vecB->xComp;
  vecSum->yComp = vecA->yComp + vecB->yComp;
}



#endif
