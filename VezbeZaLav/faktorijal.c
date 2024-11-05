// 23.	Napisati program kojim se izračunava:
// S=1!+2!+3!+…+n!
// 1!= 1, 2!=1*2,3! = 1*2*3.... s=n!, 1-

#include <stdio.h>
int main()
{
  int suma=0,broj, faktorijalBroja=1;

  printf("\n\n_____Suma faktorijala_____\n\n");

  printf("Unesite jedan prirodni broj: ");
  scanf("%d",&broj);

  for (int i = 1; i <=broj; i++)
  {
      faktorijalBroja*=i;
      printf("Faktorijal: %d\n",faktorijalBroja);
       suma+=faktorijalBroja;
  }

  printf("Suma svih faktorijala brojeva od 1 do %d je : %d", broj,suma);
  
  return 0;
}