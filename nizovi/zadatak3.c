#include <stdio.h>
#define MAX 100


float ars(int niz[], int n)
{
  int i,suma=0,brojdeljivo3=0;
  for ( i = 0; i <n; i++)
  {
      suma+=niz[i];
      brojdeljivo3++;
  }
  float aritmeticka=  (float) suma/brojdeljivo3;
  return aritmeticka;
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

int ispis(int niz[], int n)
{ 
  int i;
  printf("Elementi niza su: \n");
  for ( i = 0; i < n; i++)
  {
    printf("%d", niz[i]);
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


int formiraj2(int A[],int B[], int n) 
{
  int i,j;
  float as= ars(A,n);
  for ( i = 0; i < n; i++)
  {
    if (B[i] > as)
    {
      B[j] = A[i];
      j++;
    }
    
  }
  return j;
}

int main() {
  int A[MAX], B[MAX], C[MAX], n, m;
  printf("Unesite duzine niza: ");
  scanf("%d", &n);
  unos(A, n);

  m = formiraj2(A,B,n);

  ispis(B,m);
  return 0;
}