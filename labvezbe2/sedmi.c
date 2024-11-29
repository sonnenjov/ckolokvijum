// 7. Sa ulaza se učitavaju prirodni brojevi a i b. Napisati program kojim se ispisuju svi prirodni brojevi zi intervala [a,b] 
// koji su deljivi svim svojim ciframa. 

#include <stdio.h>
#define MAX 100

  int nizBroja(int niz[MAX], int n)
  {
    int i = 0, j;
    while (n > 0)
    {
      niz[i] = n%10;
      n/=10;
      i++;
    }
    for (j = 0; j < i; j++)
    {
      if (n%niz[j] != 0) 
      {
        
      } else {
      return 1;
      }
    }
  }


  void proveraDeljivosti(int a,int b)
  {
    int i, niz[MAX];
    for ( i = a; i <= b; i++)
    {
          
    }
  }

int main()
{
  int a,b, niz[MAX];

  printf("Unesite prirodni broj a: ");
  scanf("%d", &a);
  printf("Unesite prirodni broj b: ");
  scanf("%d", &b);

  proveraDeljivosti(a,b); 
 
  
  return 0;
}