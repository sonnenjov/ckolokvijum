// ulaz a i b se unose
// izlaz je resenje za x



#include <stdio.h>
#include <math.h>


int main()
{
  float a,b, x;
  printf("Unesite varijable a i b\n");
  printf("a:");
  scanf("%f", &a);
  printf("b:");
  scanf("%f", &b);
  x = - (b/a);

  printf("X je : %f", x);
  
}