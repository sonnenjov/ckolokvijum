#include <stdio.h>

int niven(int broj)
{
  int i=1,s=0,ostatak;
  while (broj>0)
  {
    ostatak= broj%10;
    s+=ostatak;
    broj/=10;
  }
  return s;  
}

// proverava da li broj sadrzi cifru 0

int nula(int broj)
{
  int ostatak;
  while (broj >0)
  {
    ostatak=broj%10;
    if (ostatak==0)
    {
      return 0;
    }
    broj/=10;
  }
  return 1;
  
}

int provera(int broj)
{
  int s=niven(broj);
  if (nula(broj)==1 && broj%s==0)
  {
    return 1;
  }
  return 0;
}

int main()
{
  for (int i = 100; i < 1000; i++)
  {
  if (provera(i)==1)
  {
    printf("Broj %d je Nivenov broj\n", i);
  } 
  }
  return 0;  

}