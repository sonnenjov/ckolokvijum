#include <stdio.h>
#include <math.h>


int main()
{
  float x,y;
  printf("Unesite x: ");
  printf("X: ");
  scanf("%f", &x);

  if (x > -2 && x <= 2)
  {
    y = 2*x;
    printf("Y je : %f\n", y);
  } 
  else if ( x >= 5 && x < 7)
  {
    y = 3*x - 1;
    printf("Y je : %f\n", y);
  } else {
     y = 1/x;
    printf("Y je : %f\n", y);
  }

  return 0;
}