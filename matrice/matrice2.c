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
void ispis(int mat[MAX][MAX], int m,int n){
  int i,j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf( "%d ", mat[i][j]);
      }
  }
}


void sabiranjeMatrica(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX],int m, int n) {
  int i,j;
  for ( i = 0; i < m; i++)
  {
    for (j = 0;j <n; j++)
    {
      C[i][j] = A[i][j] + B[i][j]; 
    }
    
  }
  
}

void vrsteMatrice(int A[MAX][MAX],int m,int n)
{
  int i,j;
  for (i = 0; i < m; i++)
    {
      int s=0;
      for (j = 0; j < n; j++)
      {
        s+=A[i][j];
        printf("Suma svih u vrsti %d je : %d\n",i, s);
      }
    }
}

void koloneMatrice(int A[MAX][MAX],int m,int n)
{
int i,j;
int s;
      for (j = 0; j < n; j++)
    {
        s=0;
    for (i = 0; i < m; i++)
      {
        s+=A[i][j];
        printf("Suma svih u koloni %d je : %d\n",j, s);
      }
    }
}
int main()
{
  int matA[ MAX][MAX],matB[MAX][MAX],matC[MAX][MAX],m,n;
  printf("Unesite m:");
  scanf("%d", &m);
   printf("Unesite n:");
  scanf("%d", &n);
  printf("Unesite elemente matrice: \n");
   unos(matA, m,n);
  //  unos(matB, m,n);
  //  sabiranjeMatrica(matA,matB,matC,m,n);
  //  ispis(matC,m,n);
   vrsteMatrice(matA,m,n);
   koloneMatrice(matA,m,n);

  return 0;
}
