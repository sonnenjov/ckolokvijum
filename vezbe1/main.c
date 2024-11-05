#include  <stdio.h>

int main() 
{
  int a,b;
  printf("Vrednosti dva cela broja\n");
  scanf("%d %d", &a,&b);
  int pom = a;
  a = b;
  b = pom;
  printf("Vrednosti dva uneta broja su a: %d i b: %d", a, b);

  return 0;
}