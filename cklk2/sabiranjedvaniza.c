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



void sabiranjeDvaNiza(int niz1[MAX], int niz2[MAX], int niz3[MAX], int n, int duzina1, int duzina2)
{
  int i;
  // ovde nam je n zbir ove dve duzine, unosimo u funkciju gore duzinu 1        ^ i duzinu 2  ^ kako bi radili dalje operacije 
  for (i = 0; i < n ; i++)
  {
    // ovde unosimo ni3[i]  = niz1[i] prva tri broja ili koliko god da je duzina prvog niza tj duzina 1 
    niz3[i] = niz1[i];
    // kada je i vece ili jednako od duzine niza 1, znaci i ce ovde da bude 2 i samim tim to je treci element niza i onda ide ovaj loop ako je i vece ili jednako od duzine jedan onda obavi kod u zagradama prebacuje se na i=3
    if ( i >= duzina1)
    {
      // niz[i] je ovde niz[3] a ovaj drugi deo niz2[3-3] = 0 pa 4-3  = 1 , 5-3=2 i samim tim rezultati ovi se upisuju u niz3[3] = niz2[0] niz3[4] = niz2[1] niz3[5] = niz2[2]
      niz3[i] = niz2[i-duzina2]; 
    }
  }
  
}
int main()
{
  int duzinaNiza1, duzinaNiza2, niz1[MAX], niz2[MAX], niz3[MAX],zbir;
  printf("Koliku zelite duzinu prvog niza? :");
  scanf("%d", &duzinaNiza1);
  unos(niz1, duzinaNiza1);
  printf("Niz 1 je: ");
  ispis(niz1,duzinaNiza1);
  printf("\n");


  printf("Koliku zelite duzinu drugog niza? :");
  scanf("%d", &duzinaNiza2);
  unos(niz2, duzinaNiza2);
  printf("Niz 2 je: ");
  ispis(niz2,duzinaNiza2);
  printf("\n");



  
  zbir=duzinaNiza1+duzinaNiza2;
  
  sabiranjeDvaNiza(niz1,niz2,niz3, zbir,duzinaNiza1, duzinaNiza2);
  printf("Niz 3: ");
  ispis(niz3, zbir);
  return 0;
}