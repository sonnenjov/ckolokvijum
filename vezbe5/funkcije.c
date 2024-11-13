// void funkcija ne vraca nista

#include <stdio.h>

int prost(int n)
{
 int i;
 for ( i = 2; i <n/2; i++)
 {
  if (n%i == 0)
  {
    return 0;
  }
 
 }
 return 1;
}

int main()
{
  int a;
  printf("Unesite broj za proveru da li je prost: ");
  scanf("%d", &a);

  if (prost(a)==1)
  {
    printf("Broj %d jeste prost \n",a);
  }
  else {
    printf("Broj %d nije prost\n",a);
  }
  
  return 0;
}