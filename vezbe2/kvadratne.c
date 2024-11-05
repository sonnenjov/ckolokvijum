#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,D,x1,x2,x;
  D = (pow(b,2) - 4*a*c);
  printf("Unesite tri int\n");
  printf("Broj a: ");
  scanf("%f", &a);
  printf("Broj b: ");
  scanf("%f", &b);
  printf("Broj c: ");
  scanf("%f", &c);


  if ( a != 0 && D > 0)
  {
    x1 = ((-b) + sqrt(D)) / (2*a);
    x2 = ((-b) - sqrt(D)) / (2*a);
    printf("X se racuna sa = ((-b) +or- sqrt(D)) / (2*a)\n");
    printf("X1 je : %f\n", x1);
    printf("X2 je : %f\n", x2);
  } 
  else if ( a != 0 && D == 0) {
    printf("X se racuna sa = ((-b) / (2*a))\n");
    x1  = ((-b) / (2*a));
    x2  = ((-b) / (2*a));
     printf("X1 je : %f\n", x1);
    printf("X2 je : %f\n", x2);

  } 
  else if ( a != 0 && D < 0) {
    printf("X se racuna sa = ((-b) + sqrt(D)) / (2*a)\n");
    x1 = ((-b) + sqrt(D)) / (2*a);
    x2 = ((-b) - sqrt(D)) / (2*a);
    printf("X1 je : %f\n", x1);
    printf("X2 je : %f\n", x2);

  }
   else if ( a == 0 && b != 0) {
    printf("X se racuna sa =  x  = (-c / b)");
    x  = (-c / b);
    printf("X je : %f\n", x);

  } 
  else if ( a == 0 && b == 0) {
    printf("Nema resenja");
  }
  return 0;
}