#include <stdio.h>
#define MAX 100

void unos(int niz[], int n)
{
  int i;
  printf("Unesite elemente niza: \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
};

int ispis(int niz[], int n)
{ 
  int i;
  printf("Elementi niza su: \n");
  for ( i = 0; i < n; i++)
  {
    printf("%d", &niz[i]);
  }
};

void formiranje(int nizA[], int nizB[], int nizC[], int n, int m)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    nizC[i]= nizA[i];
  }
  for ( i=n; i < n+m; i++)
  {
    nizC[i] = nizB[i-n];
  }
  
}

int main() {
  int A[MAX], B[MAX], C[MAX], n,m;
  printf("Unesite duzine nizova: ");
  scanf("%d %d", &n, &m);
  unos(A, n);
  unos(B, m);
  formiranje(A,B,C, n,m);
  ispis(C, n+m);
  return 0;
}