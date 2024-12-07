#include <stdio.h>
#include <stdlib.h>


int main()
{
  int m,n;
  int **mat;

  printf("Unesite m: ");
  scanf("%d", &m);
  
  printf("Unesite n: ");
  scanf("%d", &n);

  mat= (int**) (calloc(m, sizeof(int*)));
  if (mat == NULL)
  {
    exit(1);
  }
  int i,j;
  for ( i = 0; i < m; i++)
  {
    mat[i] = (int*)(calloc(n, sizeof(int)));
    if (mat[i] == NULL)
    {
      for (j = 0; j < i; j++)
      {
        free(mat[j]);
      }
      free(mat);
    }
  }
  

  printf("Unesite elemente matrice: ");
  int s=0;
  for ( i = 0; i < m; i++)
  {
    for (j = 0; i < n; j++)
    {
      scanf("%d", &mat[i][j]);
      s+= mat[i][j];
    }
    
  }
  printf("Suma je %d", s);
  for ( i = 0; i < m; i++)
  {
    free(mat[i]);
  }
  
  return 0;

}