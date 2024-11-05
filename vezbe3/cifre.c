#include <stdio.h>


int main()
{
  int a,b,c;

  for (a = 1;a<=9;a++) 
  {
    for(b=0; b<=9;b++)
    {
      for (c = 0; c<=9; c++)
      {
        if(b==a+2 && c == b+1)
        {
          int broj = a*100 + b*10 + c;
          printf("%d\n", broj);
        }
      }
    }
  }
  return 0;
}