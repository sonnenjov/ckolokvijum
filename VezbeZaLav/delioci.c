#include <stdio.h>

int main()
{
  int broj,i;
  printf("Unesite jedan broj od 1 do 1000: ");
  scanf("%d",&broj);
  for ( i = 1; i <=broj; i++)
  {
    if (broj%i==0)
    {
      printf("Broj %d moze podeliti broj %d\n",i,broj);
    }
    
  }
  

}