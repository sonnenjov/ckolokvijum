// napisato program koji ispisuje da li se od unetih stranica moze formirati trougao


#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Unesite tri broja za kreiranje trougla: \n");
  printf("Broj 1: ");
  scanf("%d", &a);
  printf("Broj 2: ");
  scanf("%d", &b);
  printf("Broj 3: ");
  scanf("%d", &c);
  

  if ( a+b > c && a+c > b && b+c> a) {
    printf("Stranice mogu da formiraju trougao");
  } 
  else {
    printf("Stranice ne mogu da formiraju trougao");
  }


  return 0;
}