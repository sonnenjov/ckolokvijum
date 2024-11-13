#include <stdio.h>

int main()
{
  int fp=1,fpp=1,fn, i,n;
  printf("Unetyi broj do kog cemo racunati fibonacijev niz: ");
  scanf("%d",&n);

    printf("Fibonacijev niz 1 1:\n");
    for(i=3;i<=n;i++)
    {
      fn=fp +fpp;
      fpp=fp;
      fp=fn;
      printf(" %d ",fn);
    }
    return 0;
} 