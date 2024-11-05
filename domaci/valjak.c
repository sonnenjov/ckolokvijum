#include <stdio.h>
#include <math.h>

int main()
{
  const float PI = 3.14;
  float r,h,V,P; 
  printf("Unesite poluprecnik valjka: ");
  scanf("%f", &r);
  printf("Unesite visinu valjka: ");
  scanf("%f", &h);
  
P = 2*r*PI*(r+h);
V = r*r*PI*h;

printf("Povrsina valjka je %f\n", P);
printf("Zapremina valjka je %f\n", V);

  return 0;
}