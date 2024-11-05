// 	Napisati program kojim se izračunava:
// S=1/1!+(1+2)/2!+(1+2+3)/3!+⋯+(1+2+3+⋯+n)/n!


#include <stdio.h>

int main()
{
  int S,n,faktorijalN=1,temp;
  printf("Unesite jedan celi broj za izracunavanje formule: ");
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  {
      for (int j = 1; j <=i; j++)
      {
      faktorijalN*=j;
      printf("Faktorijal: %d\n",faktorijalN);
      }
      temp +=i;
      S=temp/faktorijalN;
  }
      printf("SUma:%d", S);
  return 0;
}