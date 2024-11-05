// 4.	Ispisati sve savršene brojeve do 1000. Savršen broj je onaj koji je jednak sumi svojih delitelja isključujući njega (npr. 6=3+2+1).

#include <stdio.h>


int main()
{
  int i,j,broj,suma=0;

  for (i=1;i<=1000; i++)
  {
    for (j = 1; j<i ; j++)
    {
      if (i%j==0)
      {
        suma+=j;
        
      }
      
    }
    if (suma==i)
      {
        printf("Broj %d je savrsen broj",i);
      }
    suma=0; 
  }
return 0;
}