#include <stdio.h>
int main()
{
  int a=1,b=1,zbir=0,c=1;

  printf("Pitagorini brojevi: \n");
  for (a=1;a<=20;a++)
  {
    for (b=1;b<=20;b++)
    {
      zbir=a*a+b*b;
      c=1;
      while (c*c<=zbir)
      {
        if (c*c==zbir)
        {
          printf("a=%d, b= %d, c=%d\n",a,b,c);
        }
          c++;
      } 
    }
  }
  return 0;
}