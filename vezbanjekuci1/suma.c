#include <stdio.h>

int main()
{
  int a,b,c,S=0,broj,broj_brojeva=0;
  for(a=1;a<=9;a++)
  {
    
    for(b=0;b<=9;b++)
    {
      for(c=0;c<=9;c++)
      {
        broj = a*100+b*10+c;
        if(a+b+c==5) {
          S+=broj;
          broj_brojeva++;

        
        }
      }
    }
    
  }
  printf("Suma svih brojeva ciji je zbir cifara 5 je %d i broj tih cifara je %d\n",S,broj_brojeva);
  return 0;
}