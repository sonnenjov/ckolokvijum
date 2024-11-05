#include <stdio.h>

int main()
{
  int n,i,suma=0;
  printf("\n_______Savrseni brojevi od 1 do 1000_______\n");
  for ( i = 1; i <= 1000; i++)
  {
    for (n = 1; n <i; n++)
    {
     if(i%n==0)
     {
      suma+=n;
     }
    }
    if (i==suma)
    {
      printf("Broj %d je savrsen broj\n",i);
    }  
    suma=0;
  }

  
  return 0;
}