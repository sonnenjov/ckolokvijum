// Саставити програм који учита две матрице целих бројева, А димензија nxm,  и матрицу B 
// димензија mxk, а затим формира и исписује матрицу C добијену множењем матрица А и В. 


#include <stdio.h>
#define MAX 10

// Funkcija za upisivanje matrice velicine nxn
void unos(int mat[MAX][MAX], int n, int m) 
{
  int i,j; // elementi za inkrementaciju
  for (i=0; i < n; i++) //prvi for loop za inkrementaciju za itu vrstu
  {
    for (j=0; j < m; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      printf("[%d][%d]: ",i,j); // informisanje koji element u matrici se popunjava
      scanf("%d", &mat[i][j]); // upisivanje matrice
    }
  }
}

void ispis(int A[MAX][MAX], int n, int m)
{
  int i,j;  // elementi za inkrementaciju
  for (i = 0; i < n; i++)  //prvi for loop za inkrementaciju za itu vrstu
  {
    printf("\n"); // pravljenje novog reda kako bi u ispisu bila nova linija i matrica izgledala kao matrica u terminalu 

    for (j=0; j < m; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      printf(" %d ", A[i][j]); //stampanje elementa matrice
    }
  }
}


void mnozenjeMatrica(int matA[MAX][MAX], int matB[MAX][MAX], int matC[MAX][MAX], int n, int m, int k)
{
  int i,j,t;
  // pretpostavljamo da kada su dve matrice u pitanju gde su kod prve kolone i druge vrste iste tj. - nxm mxk, ukida se m i dobijamo matricu nxk i pri tome mozemo odmah da kreiramo matricu C u tom obliku
    for (i = 0; i < n; i++)  //prvi for loop za inkrementaciju za itu vrstu
  {
    for (j=0; j < k; j++) // drugi loop za inkrementaciju za jtu kolonu
    {
      matC[i][j]=0; // svaki element prvo postavljamo da bude nula kako ne bi upisivali vrednost mnozenja u adresu
        for (t = 0; t<m; t++)
        {
          matC[i][j]= matC[i][j] + matA[i][t]*matB[t][j]; //dodajemo kolicnik na index elementa c
        }
    }
  }
}


int main()
{
  int matA[MAX][MAX],matB[MAX][MAX],matC[MAX][MAX], i,n,m,k;
  printf("Unesite n ,m i k za racunanje kolicnika matrica nxm i mxk: \n");
  printf("n: ");
  scanf("%d", &n);
  printf("m: ");
  scanf("%d", &m);
  printf("k: ");
  scanf("%d", &k);
  printf("Unesite matricu A nxm :\n");
  unos(matA,n,m);
  ispis(matA,n,m);
  printf("Unesite matricu B :\n");
  unos(matB,m,k);
  ispis(matB,m,k);
  mnozenjeMatrica(matA,matB,matC,n,m,k);

  ispis(matC,n,k);
  return 0;
}