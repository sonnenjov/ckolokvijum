#include <stdio.h>
#define MAX 10
void unos(int mat[MAX][MAX], int n, int m) 
{
  int i,j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &mat[i][j]);
    }
    
  }
  
}

void ispis(int mat[MAX][MAX], int n, int m) 
{
  int i,j;
  for (i = 0; i < n; i++)
  {
    printf("\n");
    for (j = 0; j < m; j++)
    {
      if (i==j) {
      printf(" %d ", mat[i][j]);
      }
      else {
        printf(" 0 ");
      }
    }
    
  }
  
}








int main()
{
  int matA[MAX][MAX],n,m;
  printf("n unesi: ");
  scanf("%d", &n);
  printf("m unesi: ");
  scanf("%d", &m);

  unos(matA, n,m);
  ispis(matA, n,m);


  return 0;
}