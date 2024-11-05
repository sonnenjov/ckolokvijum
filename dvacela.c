// 2.14. Саставити програм којим се замењују вредности два унета цела броја. 

#include <stdio.h>

int main()
{
  int a,b, pomocna;
  printf("Unesite jedan celi broj: ");
  scanf("%d", &a);
  printf("Unesite drugi celi broj: ");
  scanf("%d", &b);

  pomocna=a;
  a=b;
  b=pomocna;

  printf("%d\n",a);
  printf("%d\n",b);

  return 0;
}