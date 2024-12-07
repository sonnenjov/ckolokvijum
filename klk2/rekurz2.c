// Саставити рекурзивну функцију која степеновање целог броја на целобројни изложилац, а 
// затим тестирати функцију за дати природни број и изложилац и исписати добијени резултат. 
#include <stdio.h>


long rekurz(long n, long k)
{
  if (k==0)
  {
    return 1;
  }
  else{
    return n*rekurz(n,k-1);
  }
}
int main()
{
  long n;
  int k;
  printf("Unesite vrednost broja: ");
  scanf("%ld", &n);
  printf("Unesite vrednost stepena: ");
  scanf("%d", &k);

  long vrednost = rekurz(n,k);

  printf("Vrednost je: %ld", vrednost);
  return 0;
}