#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,d;
  printf("Upisati realni broj za prvi kompleksni broj: a =  ");
  scanf("%f", &a);
   printf("Upisati imaginarni broj za prvi kompleksni broj: b =  ");
  scanf("%f", &b);
   printf("Upisati realni broj za drugi kompleksni broj: c =  ");
  scanf("%f", &c);
   printf("Upisati imaginarni broj za drugi kompleksni broj: d =  ");
  scanf("%f", &d);

 
  printf("Z1 = %.2f + %.2fi\n", a,b);
  printf("Z2 = %.2f + %.2fi\n", c,d);

  printf("Zbir ova dva kompleksna broja je: Z1+Z2 = (%f + %f) + (%f + %f)i \n", a,c,b,d);
  printf("Razlika ova dva kompleksna broja je: Z1-Z2 =  (%f + %f) - (%f + %f)i\n", a,c,b,d);
  return 0;
}