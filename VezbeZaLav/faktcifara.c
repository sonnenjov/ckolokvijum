// 11.	Ispisati one trocifrene brojeve koji su jednaki sumi faktorijela svojih cifara.
#include <stdio.h>

int main()
{
  int a,b,c, faktorijalBrojaA=1, faktorijalBrojB=1,faktorijalBrojaC=1, suma=0,broj;

  for (a = 1; a <=9; a++)
  {
    for(b=1;b<=9;b++)
    {
      faktorijalBrojB= faktorijalBrojB*b;
      for(c=1;c<=9;c++)
      {
          faktorijalBrojaA= faktorijalBrojaA*a;
          faktorijalBrojaC = faktorijalBrojaC*c;
          broj=a*100+b*10+c; 
          printf("Faktorijali A B C : %d.%d.%d\n",faktorijalBrojaA,faktorijalBrojB,faktorijalBrojaC);
      }
    }   
  suma=faktorijalBrojaA+faktorijalBrojB+faktorijalBrojaC;
  printf("Suma faktorijala: %d\n",suma);
  if (suma==broj)
        {
          printf("Broj: %d\n",broj);
        }  
  faktorijalBrojaA=1;
  suma=0;
  }

  return 0;
}