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
      printf("%d", mat[i][j]);
      }
  }
}


void najveciZbirVrsta(int A[MAX][MAX], int m,int n) {
  int i,j,s,najveci=0, imax=-1;
   for (i = 0; i < m; i++)
  {
    s=0;
    for (j = 0; j < n; j++)
    {
      s+= A[i][j];
      if (s > najveci)
      {
        najveci=s;
        imax=i;
      }
    }
    printf("Najveci zbir u vrsti %d je %d",imax, najveci);
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

  najveciZbirVrsta(mat, m,n);
  return 0;
}