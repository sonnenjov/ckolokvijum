//5. Napisati program kojim se za date prirodne brojeve m i n određuje suma m poslednjih cifara broja n
#include <stdio.h>
#define MAX 10



// ovde se pravi obrnuti array, pa cu morati jos jednu fuknciju za to
int pravljenjeNiza(int niz[MAX], int n)
{
  int i = 0;
  while (n>0)
  {
    niz[i] = n%10;
    n/=10;
    i++;
  }
  return i;
}

void prevrtanjeListe(int niz[MAX], int n)
{
  int i,j,pom;
    for ( i = 0; i < n-1; i++)
  {
    for (j = i+1; j < n; j++)
    {
      pom=niz[i];
      niz[i]=niz[j];
      niz[j]=pom;
    }
}
}


void ispisivanjeListe(int niz[MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf(" %d ", niz[i]);
  }
  
}
// ovde radimo obrnuto for petlju od najveceg ka manjem broju gde racunamo od poslednje cifre niza n do cifre koja je n-m i sumiramo je
int sumaPoslednjih(int niz[MAX], int n, int m)
{
  int suma=0;
  for (int i = n-1; i >= n-m; i--)
  {
    printf("\nNiz[i]: %d\n", niz[i]);
    suma+=niz[i];
  }
  return suma;  
}
int main()
{
  int n,m, niz[MAX], brojCifara,suma=0;
  printf("Unesite prirodni broj n: ");
  scanf("%d",&n);
   printf("Unesite prirodni broj m: ");
  scanf("%d",&m);
  brojCifara=pravljenjeNiza(niz, n); // ovde se u varijablu upisuje broj cifara kako bi mogli da prolazimo kroz niz u buducnosti a samim tim i ispunjava niz preko funkcije pravljenjeNiza
  prevrtanjeListe(niz,brojCifara);
  ispisivanjeListe(niz,brojCifara);
  suma = sumaPoslednjih(niz,brojCifara,m);
  printf("Suma poslednjih %d cifara broja %d je : %d", m,n,suma);
  return 0;
}