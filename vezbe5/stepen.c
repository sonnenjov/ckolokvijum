#include <stdio.h>


long stepen(int broj,int n) {
  if (n==0)
  {
    return 1;
  }
  
return broj * stepen(broj,n-1) ;
}
int main()
{
  printf("Stepen: %ld", stepen(4,3));
  return 0;
}

