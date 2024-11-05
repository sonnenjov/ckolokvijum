#include <stdio.h>

int main()
{
  int n,i=1;
  printf("Sta zelite da ucinite, izaberite:\n");
  printf("1. svi brojevi prve desetice\n");
  printf("2. parni brojevi prve desetice\n");
  printf("3. brojevi prve desetice obrnutim redosledom \n");

  scanf("%d",&n);


  if (n==1)
  {
    printf("\nSvi brojevi prve desetice\n");
      do
      {
        printf("%d\n",i);
        i++;
      } while (i<=10);
  }
  else if (n==2)
  {
    printf("\nParni brojevi prve desetice\n");
    do
    {
      if (i%2==0)
      {
        printf("%d\n",i);
      }
      i++;      
    } while (i<=10);
  } else if (n==3)
  {
    i=10;
    printf("\nObrnuti prve desetice\n");
    do
    {
      printf("%d\n",i);
      i--;
    } while (i>0);
    
  } else {
    printf("Uneli ste neispravni unos.\n");
  }
  
  

  return 0;
}