#include <stdio.h>


int main()
{
  int i,n;
  float p,max;
  printf("Unesite broj n \n");
  printf("n:");
  scanf("%d",&n);
  printf("Unesite prvi realan broj: \n");
  printf("p: ");
  scanf("%f", &p);
  max=p;
  for(i = 2; i<= n; i++)
  {
    printf("Unesite %d realan broj: \n",i);
    printf("p: ");
    scanf("%f", &p);
    if (p > max) {
      max = p;
    }
  }

  printf("Najveci broj iz unetih brojeva je: %.2f", max);

  return 0;
}