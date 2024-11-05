#include <stdio.h>

int main()
{
  int a,b,c,broj1,broj2;
  for ( a= 1; a <=9; a++)
  {
    for(b=0;b<=9;b++)
    {
      for (c= 0; c<=9; c++)
      {
        broj1 = a*100+b*10+c;
        broj2 = a*10+c;
        if (broj1%broj2==0)
        {
          printf("Broj: %d deljiv je brojem %d\n",broj1,broj2);
        }
        
      }
      
    }
  }
  
  return 0;
}