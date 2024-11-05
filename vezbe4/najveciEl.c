#include <stdio.h>
#include <math.h>
int main()
{
  int i,n,f=1,a,p,t;
  printf("Unesite n: ");
  scanf("%d", &n);
  printf("Unesite a: ");
  scanf("%d", &a);
  for ( i=2; i <=n;i++)
  {
    f*=i;
    t = pow(i,3)*sin(2*n+(float)f/(n+1));
    if (t%2==0)
    {
      p=1;
      break;
    }

  }
  if (p ==1)
  {

  }
  
  return 0;
}