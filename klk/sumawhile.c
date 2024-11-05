// 5.14. Саставити програм којим се приближно рачуна сума: 2 2 2 2
//  1
//  1 1 1 1 ... 1 2 3 n
//  S n
//  ∞
//  =
//  = + + + =∑ 
// Сумирање вршити све док је општи члан већи од 10-4. 


#include <stdio.h>
#include <math.h>
int main()
{
  int n=1;
  float S=0, clan;
  clan=1/(n*n);
  while (clan > 1e-4)
  {
    S = S + clan;
    n++;
    clan=1.0/(n*n);
  }
  printf("Suma je %.3f, a clan je: %.4f",S,clan);  
  return 0;
}