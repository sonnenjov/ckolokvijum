// Aritmeticku sredinu elemenata matrice mxn
#include <stdio.h>
#define MAX 10


void unos(int mat[MAX][MAX], int m,int n){
  int i,j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
      }
  }
}


void ars(int mat[MAX][MAX], int m, int n)
{
  int i,j,s=0;
   for ( i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      s+=mat[i][j];
  float ars = (float)s / (m*n);
  printf("Aritmeticka sredina je : %.2f", ars);
}


void ispis(int mat[MAX][MAX], int m,int n){
  int i,j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d", mat[i][j]);
      }
  }
}


int main()
{
  int mat[ MAX][MAX],m,n,i,j,s=0;
  printf("Unesite m:");
  scanf("%d", &m);
   printf("Unesite n:");
  scanf("%d", &n);
  printf("Unesite elemente matrice: \n");
  unos(mat, m,n);
  ars(mat, m, n);  
  ispis(mat,m,n);
  return 0;
}
