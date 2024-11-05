// 11.	Napisati program za međusobnu razmenu vrednosti dve celobrojne primenljive bez korišćenja drugih promenljivih.


#include <stdio.h>

int main()
{
  int a=3,b=6;
  for (int i = 1; i<=a ; i++)
  {
    if (i==a)
    {
      
      b=i;
    }
    
  }
  
  printf("A: %d",a);
  printf("B: %d",b);
  


  return 0;
}