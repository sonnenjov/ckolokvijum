// . Sa tastature se učitava prirodan broj n i zatim n prirodnih brojeva među kojima su bar dva različita. Napisati 
// program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost. Na primer za pet brojeva 6, 6, 7, 6, 
// 2 ispisuje: 
// Druga po veličini vrednost je 6. 

#include <stdio.h>
#define MAX 100
void unosNiza(int niz[MAX], int broj)
{
  int i;
  for ( i = 0; i < broj; i++)
  {
    printf("Unesite element niza [%d]: ", i);
    scanf("%d", &niz[i]);
  }
}


void ispisivanjeNiza(int niz[MAX], int broj)
{
    int i, max=niz[0], pmax=niz[1];
  for ( i = 0; i < broj; i++)
  { 
    printf(" %d ", niz[i]);
  }
}

int maxNiza(int niz[MAX], int broj)
{
    int i, max=niz[0], pmax=niz[1];
  for ( i = 0; i < broj; i++)
  {
    if (niz[i] > max)
    {
      pmax=max;
      max=niz[i];
    }
    else {
      pmax=niz[i];
    }
    
  }
  return pmax;
}


int main()
{
  int broj, niz[MAX];
  printf("Unesite prirodni broj: ");
  scanf("%d", &broj);
  
  unosNiza(niz, broj);
  ispisivanjeNiza(niz, broj);
  printf("\n");

  int maksimum = maxNiza(niz,broj);

  printf("Drugi po redu velicine broj u nizu je : %d", maksimum);
  return 0;
}