//napisati program koji ce obavljati skracivanje razlomaka
//npr 2/4 = 1/2

#include <stdio.h>

int main()
{
  int deljenik, delilac, deljenik2=0,delilac2=0;

  printf("Uneti deljenik: ");
  scanf("%d", &deljenik);
  printf("Uneti delilac: ");
  scanf("%d", &delilac);
  

  printf("\n\nCeli razlomak je %d/%d\n\n",deljenik,delilac);


  for (int i = 1; i < deljenik || i< delilac ; i++)
  {
      if (deljenik%i==0 && delilac%i==0)
      {
        deljenik2=deljenik/i;
        delilac2=delilac/i;

      } else if (deljenik%i==1 && delilac%i==1)
      {
        deljenik2=deljenik/i;
        delilac2=delilac/i;
      }
    


  }
  printf("Skraceni razlomak: %d/%d\n",deljenik2,delilac2);
  

  return 0;
}