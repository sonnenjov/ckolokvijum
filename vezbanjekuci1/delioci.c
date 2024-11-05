#include <stdio.h>

int main()
{
  int i,n;
  printf("Unesite broj kojem zelite da nadjete delioce: \n");
  printf("Broj: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (n%i==0)
    {
      printf("Delioc broja %d je %d\n",n,i);
    }
  }
  
  return 0;
}