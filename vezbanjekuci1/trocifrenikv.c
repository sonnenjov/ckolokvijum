#include <stdio.h>
#include <math.h>
int main()
{
  int i,a,b,c,broj,racun;
  for(a=1; a<=9;a++)
  {
    for(b=0;b<=9;b++)
    {
      for (c=0; c<=9;c++)
      {
        broj=a*100+b*10+c;
        racun = pow((a*10+b),2) - pow(c,2) ;
        if (broj == racun)
        {
          printf("Broj (ABC)-%d jednak je racunu-(AB)^2 - C^2 -- %d\n",broj,racun);
        }
      }
    }
  }
  return 0;

}