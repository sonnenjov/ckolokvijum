// uneti prvi operand opraciju i drugi operand ispisati rezultat 
#include <stdio.h>


int main()
{
int a,b;
char op;
float rezultat;
printf("Unesite izraz:  ");
scanf("%d %c %d", &a, &op, &b);

switch (op)
{
case '+':
  rezultat=a+b;
  break;
case '-':
  rezultat=a-b;
  break;
case '*':
  rezultat=a*b;
  break;
case '/':
  rezultat= (b != 0) ? (float)a/b : 0;
  break;
  default:
  printf("Neispravna operacija\n");
  return 1;
}

printf("Rezultat izraza je : %d%c%d=%f\n",a,op,b,rezultat);
}