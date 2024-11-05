// 7.	Ispisati sve trocifrene brojeve čija je suma cifara jednaka učitanom broju X.

#include <stdio.h>

int main()
{
  int a,b,c,n, zbir=0,broj;
  printf("Unesite broj od 1-27: ");
  scanf("%d",&n);
  if (n<=27)
  {
  
  for ( a = 1; a <= 9; a++)
  {
    for (b= 0; b <= 9; b++)
    {
      for (c = 0; c<=9; c++)
      {
        broj=a*100+b*10+c;
        if (a+b+c==n)
        {
          printf("Broj %d ima cifre ciji zbir je jednak broju  %d\n",broj,n);
        }
        
      }
      
    }
    
  }
  } else {
    printf("Uneli ste broj veci ili manji od 27!");
  }
  
  return 0;
}