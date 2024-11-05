#include <stdio.h>

int main()
{
  int n, i,max=1,sec_max=1,broj;
  printf("\n________Odredjivanje najveceg broja iz niza________\n");
  printf("Unesite jedan prirodni broj: ");
  scanf("%d", &n);
  for (i = 1; i <=n; i++)
  {
    printf("Unesite %d-i prirodni broj: \n",i);
    scanf("%d", &broj);
    if (broj>max)
    {
      sec_max=max;
      max=broj;
    } 
    else if (broj<max){
      sec_max=broj;
    }
  
  }
    printf("Najveci broj je: %d",max);
    printf("Drugi po vrednosti  broj je: %d",sec_max);
  return 0;
}