#include <stdio.h>

  int main()
  {
    int a,b,i,p,pom;
    printf("Unesite dva broja a i b: \n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);

    printf("Svi brojevi iz intervala koji su deljivi ciframa su: \n");

    for ( i = a; i<=b; i++)
    {
      p = 1;
      pom=i;
      while (pom>0)
      {
        //zadnja cifra
        int zcifra= pom%10;
        //518%10=8
        //obrada
        if(zcifra==0 || i %zcifra!=0)
        {
          p=0;
          break;
        }
        //unistite zadnju cifru
        pom/=10;
      }
      if(p==1)
      {
        printf("Ovaj broj je deljiv svim svojim ciframa: %d\n",i);
      }
    }
    
  }