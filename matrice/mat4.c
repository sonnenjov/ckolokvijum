#include <stdio.h>
#define MAX 10




void glavnaDijag(int A[MAX][MAX],int n) {
  int i,j;
  printf("Elementi sa glavne dijagonale: \n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (i==j){
          printf("%d ", A[i][j]);
        } 
      }   
      }
    }

void iznadDijag(int A[MAX][MAX],int n) {
  int i,j;
  printf("Elementi iznad glavne dijagonale: \n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (i<j){
          printf("%d ", A[i][j]);
        } 
      }   
      }
    }

void ispodDijag(int A[MAX][MAX],int n)
{
  int i,j;
  printf("Elementi ispod glavne dijagonale: \n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (i>j){
          printf("%d ", A[i][j]);
        } 
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
