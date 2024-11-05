#include <stdio.h>


int main()
{
  int cifra;
  printf("Unesite cifru od 0-9: ");

  scanf("%d", &cifra);

  if (cifra==1)
  {
    printf("%d -jedan\n",cifra);
  }
  else if (cifra==2)
  {
    printf("Dva\n");
  }
  
  
  return 0;
}