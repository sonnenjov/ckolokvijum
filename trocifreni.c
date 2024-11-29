#include <stdio.h>
#define MAX 10


int main()
{
  int n, a,b,c,niz[MAX];
  printf("Unesite trocifreni broj: ");
  scanf("%d", &n);
  a=n/100;
  b=n%100;
  c=b%10;
  niz[0] = a;
  niz[1] = b;
  niz[2] = c;
  int max=0;
  for (int i = 0; i < 3; i++)
  {
    if (max< niz[i])
    {
      max=niz[i];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    printf("%d",niz[i]);
  }
    

  return 0;
}