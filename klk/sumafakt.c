#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int n=0,faktorijal;
  float suma=1.0,clan,eps,x;
  printf("Unesite x: ");
  scanf("%d",&x);
  printf("Unesite granicu eps u decimalama: ");
  scanf("%d",&eps);



    clan=(pow(-1,n))*(pow(x,n)/ faktorijal);
    while (abs(clan) > eps)
    {
      suma+=clan;
      n++;
      clan=(pow(-1,n))*(pow(x,n)/ faktorijal);
    }
    
  return 0;
}