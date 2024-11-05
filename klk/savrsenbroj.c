#include <stdio.h>

int main()
{
  int broj,zbir=0,i=1;


  scanf("%d", &broj);

  while (i<broj)
  {
    if (broj%i==0)
    {
      zbir+=i;
    }   
    i++;
  }
  if (broj==zbir)
  {
    printf("Broj: %d je savrsen\n", broj);
  } else {
    printf("Broj: %d nije savrsen\n", broj);
  }
  return 0;
}