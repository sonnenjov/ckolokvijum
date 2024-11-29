// 2. U nizu 20114623566079... svaka cifra počev od pete jednaka je poslednjoj cifri zbira četiri prethodne cifre. 
// Napisati program kojim se određuje pozicija cifre od koje će se ponovo naići na početnu kombinaciju 2011.

#include <stdio.h>
#define MAX 100
int pravljenjeNiza(int niz[MAX], long n)
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

void ispisivanjeNiza(int niz[MAX], int broj)
{
  for (int i = 0; i < broj; i++)
  {
    printf(" %d ", niz[i]);
  }
}


int main()
{
  int niz[MAX];
  long broj = 20114623566079;
  int brojElemenata=pravljenjeNiza(niz,broj);
  ispisivanjeNiza(niz, brojElemenata);
  return 0;
}