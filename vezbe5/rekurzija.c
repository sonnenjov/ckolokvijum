// pozivaju funkciju nekim drugim korakom

#include <stdio.h>

  long faktorijal(int broj)
  {
  // if (broj==1)
  // {
  //   return 1;
  // }
  // return broj * faktorijal(broj-1);
  return (broj==1) ? 1 : broj*faktorijal(broj-1);
  }


int main()
{
  int a=5;


  printf("Faktorijal od %d! je : %ld'\n",a, faktorijal(a));
}