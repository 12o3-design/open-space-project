#include "Vect.h"
#include <stdio.h>

int main(int argc, char* argv[])
{

  Vect* test1 = new Vect();
  test1->xComp = 3;
  test1->yComp = 2;

  Vect* test2 = new Vect();
  test2->xComp = 5;
  test2->yComp = -4;

  printf("\ntest1:\nx:%d\ny:%d\n", test1->xComp, test1->yComp);
  printf("\ntest2:\nx:%d\ny:%d\n", test2->xComp, test2->yComp);

  Vect* sum = new Vect();
  vectorSum(test1, test2, sum);

  printf("\nsum:\nx:%d\ny:%d\n", sum->xComp, sum->yComp);

  return 0;
}
