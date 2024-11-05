// ulaz temperatura u farenhajtima 
// izlaz temperatura u celzijusima




#include <stdio.h>



int main()
{
  float cels, faren;
  printf("Unesite temperaturu u farnhajtima:");
  scanf("%f", &faren);
  cels = (faren - 32) / (1.8);
  printf("Temperatura u celzijusima je : %f", cels);
  return 0;
}