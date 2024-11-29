// uneti niz celih brojeva i ispisati sumu elemenata niza
#include <stdio.h>
#define MAX 100

void ars(int niz[], int n)
{
  int i,suma=0,brojdeljivo3=0;
  for ( i = 0; i <n; i++)
  {
    if (niz[i]%3==0)  // umesto niz[i] pisemo i ako je pitanje da su indeksi niza deljivi sa tri
    {
      suma+=niz[i];
      brojdeljivo3++;
    }
    
  }
  float aritmeticka=  (float) suma/brojdeljivo3;
  printf("Aritmeticka deljivih sa tri je %f\n", aritmeticka);
}


void unos(int niz[], int n)
{
  int i;
  printf("Unesite elemente niza: \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
};

int ispis(int niz[], int n)
{ 
  int i;
  printf("Elementi niza su: \n");
  for ( i = 0; i < n; i++)
  {
    printf(" %d ", niz[i]);
  }
};


int main()
{
  int niz[MAX], i=0,n,suma=0;
  printf("Unesite broj elemenata u nizu: ");
  scanf("%d",&n);
  unos(niz,n);
  ispis(niz,n);
  return 0;
}