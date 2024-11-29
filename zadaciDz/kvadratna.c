#include <stdio.h>
#define MAX 10

// Funkcija za upisivanje matrice velicine nxn
void unos(int mat[MAX][MAX], int n) 
{
  int i,j; // elementi za inkrementaciju
  for (i=0; i < n; i++) //prvi for loop za inkrementaciju za itu vrstu
  {
    for (j=0; j < n; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      printf("[%d][%d]: ",i,j); // informisanje koji element u matrici se popunjava
      scanf("%d", &mat[i][j]); // upisivanje matrice
    }
  }
}

void ispis(int A[MAX][MAX], int n)
{
  int i,j;  // elementi za inkrementaciju
  printf("\nMatrica A velicine %dx%d : \n", n,n);
  for (i = 0; i < n; i++)  //prvi for loop za inkrementaciju za itu vrstu
  {
    printf("\n"); // pravljenje novog reda kako bi u ispisu bila nova linija i matrica izgledala kao matrica u terminalu 

    for (j=0; j < n; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      printf(" %d ", A[i][j]); //stampanje elementa matrice
    }
  }
}


//funkcija za sabiranje svih elemenata u matrici 
void sabiranje(int A[MAX][MAX], int n){
  int i,j, suma=0;
  for (i = 0; i < n; i++)  //prvi for loop za inkrementaciju za itu vrstu
  {
    for (j=0; j < n; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      suma+= A[i][j]; // racunanje sume svih elemenata u matrici
    }
  }
  printf("\nSuma svih elemenata u matrici A je: %d", suma);
}

int main()
{
  int matA[MAX][MAX], i,n;
  printf("Unesite n za racunanje matrice nxn: ");
  scanf("%d", &n);
  unos(matA,n);
  ispis(matA,n);
  sabiranje(matA,n);
  return 0;
}