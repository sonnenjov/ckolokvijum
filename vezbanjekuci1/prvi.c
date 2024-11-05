// Sastaviti program koji ce ispisati 
// sve brojeve prve stotine koji su 
// deljivi sa 6 i iispisati njihovu sumu


#include <stdio.h>

int main()
{
  int suma=0, i;
  printf("\n_______________Brojevi deljivi sa 6_______________\n\n");
  for (i = 0; i<=100; i++)
  {
    if(i%6 == 0)
    {
      printf("%d\n", i);
      suma+=i;
      printf("\n_____Azurirana suma: %d_____\n", suma);
    }
  }
  printf("\n_______________Suma svih brojeva deljivih sa 6 je : %d_______________\n",suma);
  return 0;
}