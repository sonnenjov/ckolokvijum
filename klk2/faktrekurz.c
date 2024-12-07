// аставити програм који за дато n рачуна и исписује суму S = 1! + 2! + 3! + ... + n!. За 
// рачунање факторијела користити одговарајућу функцију. 

#include <stdio.h>

long fakt(long n)
{
  if (n==1)
  {
    return 1;
  }
  else{
  return n*fakt(n-1);
  }
}


int main()
{
  long n;
  printf("Unesite vrednost za racunanje faktorijela broja:");
  scanf("%ld", &n);
  long faktorijal = fakt(n);
  printf("Faktorijal: %ld", faktorijal);
  return 0;
}