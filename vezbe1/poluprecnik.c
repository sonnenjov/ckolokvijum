// Ulaz poluprecnik kruga
// izlaz: obim i povrsina kruga
// Obim : 2rPI
//Povrina : r^2Pi
// const za PI = 3.14

#include <stdio.h>
#include <math.h>
int main()
{
  float r, O, P;
  const float PI = 3.14;
  printf("Unesite poluprecnik kruga\n");
  printf("Poluprecnik: ");
  scanf("%f", &r);
  O = 2 * r * PI;
  P = pow(r,2) * PI;

  printf("Obim je %f, Povrsina je %f", O, P);
  return 0;
}