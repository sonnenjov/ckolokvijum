// 71.	Napisati program kojim se nalazi suma prvih N elemenata Fibonačijevog niza.
// 1,1,2,3,5,8,13…n


#include <stdio.h>

int main()
{
  int broj,i=1,fpp=1,fp=1,fn;
  printf("Unesite broj do kog zelite da racunate fibonacijev niz: ");
  scanf("%d", &broj);


  printf("Fibonacijev niz: 1 1 : ");
  while(i<=broj)
  {
    fn=fp+fpp;
    fpp=fp;
    fp=fn;
    if (broj<fn)
    {
      return 1;
    }
    printf(" %d ",fn);
    i++;
  }
  return 0;
}