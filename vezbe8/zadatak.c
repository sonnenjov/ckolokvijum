#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void govornica(int niz[], int n, int *zbir, int *vremecekanja5, int k)
{
  int i= 0;
  *zbir= 0;
  *vremecekanja5=0;
  for ( i = 0; i < n; i++)
  {
      *zbir+=niz[i];
      if (niz[i] == k-1)
      {
        *vremecekanja5 = *zbir;
        continue;
    }
  }
  
}

void unos(int *niz, int n)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    printf("Koliko se osoba %d zadrzala za govornicom? ", i);
    scanf("%d", &niz[i]);
  }
};



int main()
{
  int n, *niz, vremecekanja5osobe,zbir;
  printf("Unesite koliko osoba je bilo za govornicom: ");
  scanf("%d",&n);
  niz = (int*)(malloc(n* sizeof(int)));
  if (niz==NULL){
    printf("Doslo je do greske pri alociranju memorije niza");
  }
  unos(niz, n);
  govornica(niz, n, &zbir, &vremecekanja5osobe, 5);
  printf("Zbir %d: \n", zbir);

  printf("%d osoba je cekala %d\n", 5, vremecekanja5osobe);
  free(niz);
  return 0;
}