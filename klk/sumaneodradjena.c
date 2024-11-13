#include <stdio.h>

int main()
{
  int faktorijalN=1,i, broj;
  float suma=0,donjiClan=0;

  printf("Unesite broj: ");
  scanf("%d",&broj);


  for ( i = 1; i<=broj; i++)
  {
    faktorijalN*=i;
    donjiClan=1.0/(i+1);
    suma+=(faktorijalN/donjiClan);
    printf("Faktorijal: %d\n",faktorijalN);
    printf("Donji: %.6f\n",donjiClan);
    printf("Suma: %.6f\n",suma);
  }

  printf("Suma finalna je: %.6f\n",suma);

  return 0;
}