#include <stdio.h>
#include <math.h>
int main()
{
  int i=1,sp=0;
  float eps,clan,S=0;
  long f=1;  

  printf("Unesite granicu eps: ");
  scanf("%f", &eps);



  do
  {
    sp+=i;
    f*=i;
    clan= (float)sp /f;
    S+=clan;
    i++;

  } while (fabs(clan) >= pow(10,-6));

  printf("Dobijena suma: %f",S);
    
  return 0;
}