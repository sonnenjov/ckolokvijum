// 21.	Napisati program kojim se za učitane vrednosti N i M izračunava P:
	// P=({{{{{n}}}}}+((((m)))))({{{{{n-}}}}}(((2m))))…({{{{{{{n+(-1)n}}}}}}}+((((1m*m)))))	
// 
//n=2
//m=4
//p=6
//p=-10
//p=-16
//p=-22
//p=-28
// P=(2+(-1*2)+1*4*4)


#include <stdio.h>

int main()
{
  int m,n,P=1,temp;
  printf("Uneti m: ");
  scanf("%d", &m);
  printf("Uneti n: ");
  scanf("%d", &n);
  for (int i =1; i <=m; i++)
  {
   
  }
  P*=n;
  printf("\nResenje P je : %d",P);
  
  return 0;
}