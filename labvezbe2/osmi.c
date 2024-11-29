// 8. Sa ulaza se učitavaju prirodni brojevi a i b. Napisati program kojim se ispisuju svi prirodni brojevi zi intervala [a,b] 
// koji su deljivi sumom svojih cifara, ne uzimajući u obzir poslednju cifru. 

#include <stdio.h>
#define MAX 100

  int nizBroja(int niz[MAX], int a, int b)
  {
    int i = 0,j=0;
    for ( i = a; i < b; i++)
    {
      niz[j]= i;
      j++;
    }
    return j;
  }


void proveraDeljivosti(int niz[MAX], int duzina)
{
  int n, suma=0;
  for (int i = 0; i < duzina; i++)
  {
    n=niz[i];
    while (n>0)
    {
      suma+= n%10;
      n/=10;
    }
    if (niz[i]%suma==0)
    {
      printf("Broj %d je deljiv sumom svojih cifara\n", niz[i]);
    }
    suma=0;
  }
}


int main()
{
  int a,b, niz[MAX];

  printf("Unesite prirodni broj a: ");
  scanf("%d", &a);
  printf("Unesite prirodni broj b: ");
  scanf("%d", &b);

  int j = nizBroja(niz,a,b);

  proveraDeljivosti(niz,j);
  return 0;
}