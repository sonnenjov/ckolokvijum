#include <stdio.h>


void redosled(int n){
  if (n==1){
    printf("%d", n);
  }
  else {
    printf("%d ", n);
    redosled(n-1);
  }
}


int main()
{
  int n;
  printf("Unesite broj: ");
  scanf("%d", &n);

  redosled(n);
  return 0;
}