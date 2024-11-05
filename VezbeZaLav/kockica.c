#include <stdio.h>

int main()
{
  int i,j,kockica,s;
  printf("Unesite broj kockice: ");
  scanf("%d", &kockica);
  for (i = 1; i<6; i++)
  {
    for (j=1; j <6; j++)
    {
      for (s= 1; s<6; s++)
      {
        if (s+j+i==kockica)
        {
          printf("  Kombinacije su: %d %d %d",i,j,s);
        }
        
      }
      
    }
     
  }
  
  return 0;
}