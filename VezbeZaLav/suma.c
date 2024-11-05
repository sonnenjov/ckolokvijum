// 8.	Ispisati sve trocifrene brojeve čija je suma prve dve cifre veća od treće cifre trocifrenog broja.

#include <stdio.h>

int main()
{
  int a,b,c,broj,sumaPrvih;;
  for (a = 1; a<=9; a++)
  {
    for (b = 0; b <=9; b++)
    {
      for (c = 0;c<=9;c++)
      {
        broj=a*100+b*10+c;
        sumaPrvih=a+b;
        if (sumaPrvih>c)
        {
          printf("Suma prva dva broja je veca od trece cifre u trocifrenom broju: %d\n",broj);
          sumaPrvih=0;
        } else {
          sumaPrvih=0;
        }
        
      }
      
    }
    
  }
  
  return 0;
}