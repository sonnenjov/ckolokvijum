#include <stdio.h>

int main()
{
  int broj,suma=0,i;

  printf("Unesite broj kojem zelite da odredite da li je Nivenov broj:  ");
  scanf("%d", &i);
  broj=i;
  while (broj>0)
  {
    suma+= broj%10;
    broj/=10;
  }
  printf("SUMA: %d\n", suma);
    if (broj%suma==0)
    {
      printf("Broj %d je Nivenov broj\n",i);
    } else {
      printf("Broj %d nije Nivenov broj\n",i);
    }
  

  return 0;
}