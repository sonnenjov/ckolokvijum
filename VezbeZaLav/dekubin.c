// 16.	Za učitani dekadni broj ispisati ekvivalent u binarnom sistemu. Cifre binarnog broja se generišu sa leva na desno.
#include <stdio.h>

int main()
{
  int decimalni, binarni, ostatak;

  printf("Unesite decimalni broj koji zelite da pretvorite u binarni: ");
  scanf("%d",&decimalni);


  while (decimalni>0)
  {
    if (decimalni%2==1)
    {
      binarni+=1;  
    }
    ostatak= decimalni/2;

  }
  
  return 0;
}