#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int ostatak,dekadni,binarni;
  printf("\n\n_____Dekadni_____\n\n");

  printf("Unesite dekadni broj koji cete pretvoriti u binarni: ");
  scanf("%d", &dekadni);

  while (dekadni>=0)
  {
    if (dekadni%2==0)
    {
      ostatak+=atoi("0");
      dekadni-=(dekadni/2);
    } else {
        ostatak+=atoi("1");
      dekadni-=(dekadni/2);
    }
    

  }
  
  
  printf("%d", ostatak);

 
  return 0;
}