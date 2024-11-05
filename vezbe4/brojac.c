#include <stdio.h>
#include <math.h>
int main()
{
  int i,n,f=1,a,p,t,broj=0;
  printf("Unesite n: ");
  scanf("%d", &n);
  printf("Unesite a: ");
  scanf("%d", &a);
  for ( i=1; i<=n;i++)
  {
    f*=i;
    t = (int)pow(i,3)*sin(2*n+(float)f/(n+1));
    if (t!=0 && t%a ==0)
    {
      broj++;
    }

  }
  if (broj>0)
  {
    printf("%d brojeva je deljivo sa %d\n",broj,a);
  } else {
    printf("Ne postoji broj koji deli %d\n",a);
  }
  
  return 0;
}