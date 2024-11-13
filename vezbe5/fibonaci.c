#include <stdio.h>



int fibonaci(int broj)
{
  if(broj==1 || broj==2)
  {
    return 1;
  }
  return fibonaci(broj-1) + fibonaci(broj-2);
}



int main() {


  printf("Fibonacijev niz: %d",fibonaci(5));
}