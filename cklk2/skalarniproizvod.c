#include <stdio.h>
#define MAX 100
// klasicni unos i ispis funkcije
void unos(int niz[], int n)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    printf("Element %d: ", i);
    scanf("%d", &niz[i]);
  }
}


void ispis(int niz[], int n) 
{
    int i;
  for ( i = 0; i < n; i++)
  {
    printf(" %d ", niz[i]);
  }
}


int skalarni(int niz1[MAX], int niz2[MAX], int n)
{
  // ovde samo navodimo skalarni prozivod da je 0 posto mora da se stavi 0 jer je sabiranje u pitanju
  int i, sp=0;
  for (i = 0; i < n; i++)
  // s obzirom da je duzina nizova ista, tj mora da bude ista za mnozenje tj pretvaranje u skalarni prolazimo kroz istu duzinu i hvatamo elemente pod indexom i oba niza i mnozimo ih
  {
    sp+= niz1[i]*niz2[i];
    printf("%d kolicnik je: %d * %d\n", i , niz1[i], niz2[i]);
  }
  
return sp;
}



int main()
{
  int duzina1, niz1[MAX], niz2[MAX];
  printf("Koliku zelite duzinu  niza? :");
  scanf("%d", &duzina1);

  unos(niz1, duzina1);
  printf("Niz 1 je: ");
  ispis(niz1,duzina1);
  printf("\n");

  unos(niz2, duzina1);
  printf("Niz 2 je: ");
  ispis(niz2,duzina1);
  printf("\n");

  int sp = skalarni(niz1,niz2,duzina1);
  printf("Skalarni proizvod ova dva niza je: %d\n ", sp);
  

  return 0;
}