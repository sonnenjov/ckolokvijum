#include <stdio.h>
#include <math.h>
int main()
{
  int dekadni, ostatak, binarni=0,i=0;
  printf("Unesite dekadni broj koji zelite da pretvorite u binarni: ");
  scanf("%d", &dekadni);

  while (dekadni>0)
  {
    ostatak=dekadni%2;
    printf("Ostatak: %d\n", ostatak);
    if (dekadni%2==1)
    {
      int dodatak=(ostatak*pow(10,i)+0.5);
      printf("Dodatak: %d\n", dodatak);
      binarni+=dodatak;
      printf("Binarni: %d\n", binarni);
    }
    dekadni/=2;
    printf("Dekadni: %d\n", dekadni);

    i++;
    printf("Iterator: %d\n", i);
    printf("\n");
  }
  printf("Binarni: %d\n" ,binarni);    
  return 0;
}