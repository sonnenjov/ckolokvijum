// 20.	Napisati program kojim se za učitane vrednosti N i M izračunava P:
// P=n(n+m)(n+2m)…(n+m*m)

// m=4
// n=3

// p = 3*(3+4)(3+8)(3+12)(3+16)=
// 3*7*11*15*19
// 65.835

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
    temp=(n+i*m);
    P*=temp;
  }
  P*=n;
  printf("\nResenje P je : %d",P);
  
  return 0;
}