#include <stdio.h>

int main()
{
  int n,i;
  float broj, S=0;
  printf("Koliko realnih brojeva zelite da unesete? : ");
  scanf("%d",&n);
  for(i=1;i <= n; i++)
  {
    printf("Unesite realan broj: ");
    scanf("%f", &broj);
    S += broj;
  }
  float as = S / n;
  printf("Suma elemenata je %.2f\n", S);
  printf("Aritmeticka sredina je %.2f\n", as);
  return 0;
}