#include <stdio.h>
#include <math.h>
int main()
{
  int n,i;
  double S = 1, p=0;
  printf("Unesite prirodni broj n za broj primenjivanja korena: \n");
  printf("Unesite n: ");
  scanf("%d", &n);

  for(i = 1;i<=n; i++)
  {
    p = sqrt(2 + p);
    S*= 1/p;

  }

  printf("Dobijeno S iznosi: %.2lf",S);
  return 0;

}