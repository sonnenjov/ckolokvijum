#include <stdio.h>
#include <math.h>


int main()
{
  float x, y;
  printf("Unesite varijablu x: ");
  scanf("%f", &x);
  y = sqrt(x+pow(x,2)+pow(x,3));
  printf("Y je: %f", y);
  return 0;
}