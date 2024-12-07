#include <stdio.h>
#define MAX 10
int sp(int nizA[MAX], int nizB[MAX], int n)
{
  if (n==0)
  {
    return 0;
  }
  return nizA[0] + nizB[0] + sp(nizA+1,nizB+1,n-1);
}
void unos(int niz[], int n)
{
  int i;
  printf("Unesite elemente niza: \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
};


int main()
{
  int nizA[MAX], nizB[MAX],n;
  printf("Unesite broj elemenata niza: ");  

  scanf("%d", &n);

  unos(nizA, n);    
  unos(nizB, n);
  printf("%d",sp(nizA,nizB, n));
  return 0;
}