// 3.5. Саставити програм који три унета реална броја уређује у неопадајућем редоследу. 


#include <stdio.h>

int main()
{
  double a,b,c,p;
  printf("A: ");
  scanf("%lf", &a);
  printf("B: ");
  scanf("%lf", &b);
  printf("C: ");
  scanf("%lf", &c);
  p=a;
  if (b>p)
  {
    if (a> c)
    {
    printf("%lf,%lf,%lf", b,a,c);
    } else {
    printf("%lf,%lf,%lf", b,c,a);
    }
  }
  else if (c>p)
  {
    
    if (b> a)
    {
    printf("%lf,%lf,%lf", c,b,a);
    } else {
    printf("%lf,%lf,%lf", c,a,b);
    }
  }
  else {
    
    if (b> c)
    {
    printf("%lf,%lf,%lf", a,b,c);
    } else {
    printf("%lf,%lf,%lf", a,c,b);
    }
  }
  
  

  return 0;
}