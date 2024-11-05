#include <stdio.h>

int main()
{
  int m,n,i, znak;
  float S = 0;
  printf("Unesite dva prirodna broja: \n");
  printf("m: ");
  scanf("%d", &m);
  printf("n: ");
  scanf("%d", &n);
  // postvljanje znaka
  znak  = 1;


    for(i =1; i<= m;i++)
    {
      
      S+=znak*(1.0 / (n+i*m));  
      // znak moze i da se menja uz pow(-1, 1+i)
      znak = -znak;
    }
    printf("Dobijena suma iznosi %.2f\n",S);
  return 0;
}