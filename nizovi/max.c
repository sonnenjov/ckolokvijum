#include <stdio.h>
#define MAX 100
// funkcija koja na;azi najveci element u nizu A duzine n
//funkcija koja proverava da li se broj B nalazi u nizu A duzine n
//funkcija koja proverava da li su svi elementu niza neparni

void sortiranjeR(int A[], int n){
  int i,j,pom;
  for ( i = 0; i < n-1; i++)
  {
    for (j = i+1; j < n; i++)
    {
      if (A[j] < A[i])
      {
        pom=A[i];
        A[i]=A[j];
        A[j]=pom;
      }
      
    }
    
  }
  
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

int najveci(int A[], int n)
{
  int najveci=A[0], j;
  for ( j = 0; j < n; j++)
  {
    if (A[j] > najveci)
    {
      najveci=A[j];
    }
    
  }
  return najveci;
}

int nalazenje(int A[], int b, int n)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    if (A[i] == b)
    {
     return 1; 
    }
  }
  return 0;
}


int neparni(int A[], int n)
{
  int i;

  for ( i = 0; i < n; i++)
  {
    if (A[i]%2==0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int A[MAX], B[MAX], n;
   printf("Unesite duzine niza: ");
  scanf("%d", &n);
  unos(A,n);
  int m = najveci(A,n);
  printf("Najveci broj iz niza A je : %d\n", m);
  if (nalazenje(A,n,5) == 1)
  {
    printf("Broj %d se nalazi u nizu A", 5);
  }
  else{
    printf("Broj %d se ne nalazi u nizu A", 5);
  }
  
  if (neparni(A, n)==1)
  {
    printf("Svi elementi u nizu A su neparni");
  }
  else {
    printf("Svi elementi u nizu A nisu neparni");
  }
  
  return 0;
}