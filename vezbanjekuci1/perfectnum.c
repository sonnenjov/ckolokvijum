#include <stdio.h>

int main()
{
  int i,n,suma=0;
    for (n=1; n<=999;n++) 
    {
      for(i=1;i<n;i++)
      {
        if (n%i==0)
        {
          suma+=i;
          
        }
      }
      if (n==suma)
      {
        printf("Broj %d je savrsen.\n",n);
      } 
    }
  return 0;
}