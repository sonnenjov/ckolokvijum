// 3.4. Саставити програм који за три унета цела броја исписује највећи. 

#include <stdio.h>

int main()
{
  int a,b,c,max,pmax;

  printf("A: ");
  scanf("%d", &a);
   printf("B: ");
  scanf("%d", &b);
   printf("C: ");
  scanf("%d", &c);

  if (a > b && a > c && b > c )
  {
    max=a;
    pmax=b;
  } else if ( b>a && b > c && a >c)
  {
    max=b;
    pmax=a;
  }
  else {
    max=c;
  }
  

  printf("Max broj je : %d", max);
  
  return 0;
}