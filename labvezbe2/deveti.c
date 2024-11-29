// 9. Ispisati sone trocifrene brojeve koji su jednaki sumi faktorijela svojih cifara. 


#include <stdio.h>

int faktorijel(int broj)
{
  int faktorijel=1;
  for (int i = 1; i <= broj; i++)
  {
    faktorijel*=i;
  }
  return faktorijel;
}


void trocifreniBr()
{
  int i,j,k;
  for ( i = 1; i <= 9; i++)
  {
    for (j=0;j<=9; j++)
    {
      for (k = 0; k <=9; k++)
      {
        int broj = i*100+j*10+k;
        int faktorijelA= faktorijel(i);
        int faktorijelB= faktorijel(j);
        int faktorijelC= faktorijel(k);
        int zbirFaktorijela= faktorijelA+faktorijelB+faktorijelC;
        if (zbirFaktorijela == broj)
        {
          printf("Zbir faktorijela %d, cifara broja %d je jednak tom broju.\n",zbirFaktorijela ,broj);
        }
      }
       
    }
  }
  
}
int main()
{
  trocifreniBr();
  
  return 0;
}