// 2. U nizu 20114623566079... svaka cifra počev od pete jednaka je poslednjoj cifri zbira četiri prethodne cifre. 
// Napisati program kojim se određuje pozicija cifre od koje će se ponovo naići na početnu kombinaciju 2011.

#include <stdio.h>
#define MAX 10000
int pravljenjeNiza(int niz[MAX], long long int n)
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


void prevrtanjeNiza(int niz[MAX], int n)
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


void ispisivanjeNiza(int niz[MAX], int broj)
{
  for (int i = 0; i < broj; i++)
  {
    printf(" %d ", niz[i]);
  }
}

void provera(int niz[MAX], int duzina)
{
  int i=4;
  while (1)
  {
     niz[i] = (niz[i - 1] + niz[i - 2] + niz[i - 3] + niz[i - 4]) % 10;

     if (niz[i] ==1 && niz[i - 1] == 1 && niz[i - 2] == 0 && niz[i - 3] == 2)
     {
      printf("Pozicija od koje pocinje ponavljanje '2011' je: %d\n", i - 3);
      break;
     }
     i++;
  }
  
  
}

int main()
{
  int niz[MAX];
  long long int broj = 2011;
  int brojElemenata=pravljenjeNiza(niz,broj);
  prevrtanjeNiza(niz,brojElemenata);
  ispisivanjeNiza(niz, brojElemenata);
  provera(niz, brojElemenata);
  return 0;
}