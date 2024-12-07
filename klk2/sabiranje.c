// Саставити рекурзивну функцију која врши сабирање првих n бројева, а затим тестирати 
// функцију за дато n и исписати добијени резултат. 

#include <stdio.h>

int sabiranje(int n)
{
  if (n==1)
  {
    return 1;
  }
  else {
    return n+sabiranje(n-1);
  }
}


int main()
{
  int n;
  printf("Unesite broj za sabiranje:");
  scanf("%d", &n);
  
  int zbir = sabiranje(n);

  printf("Zbir : %d",zbir);
  return 0;
}
