// 123 a=1 b=2 c=3

#include <stdio.h>

int main()
{
int a,b,c,broj;
  printf("Broj: ");
  scanf("%d", &broj);
  c=broj%10;
  printf("C:%d\n", c);
  b= (broj/10)%10;
  printf("B:%d\n", b);
  a= (broj - (b*10 + c)) /100;
  
  printf("A:%d\n", a);
  int sumacifara = a+b+c;
  printf("%d", sumacifara);

}