#include <stdio.h>

int main()
{
  int broj, reversed=0;
  printf("Unesite broj koji zelite da ispisete obrnutim redosledom: ");
  scanf("%d",&broj);
  while (broj > 0)
  {
    reversed= reversed*10 + broj%10;
    broj/=10;
  }
  printf("Obrnuti broj : %d\n",reversed);
  return 0;
}