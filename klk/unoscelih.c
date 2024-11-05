#include <stdio.h>

int main()
{
  int n;

  do
  {
    printf("Unesite celi broj: ");
    scanf("%d",&n);
    if (n*n<100)
    {
      printf("Kvadrat broja %d pripada prvoj stotini, a to je %d\n",n,n*n);
    }
    
    } while (n*n>=100);
  
  return 0;
}