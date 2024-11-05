#include <stdio.h>

  int main()
  {
    int a,b,i,s,pom;
    printf("Unesite dva broja a i b: \n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);

    printf("Svi brojevi iz intervala koji su deljivi ciframa su: \n");

    for ( i = a; i<=b; i++)
    {
      s = 0;
      pom=i / 10;
      while (pom>0)
      {
        //zadnja cifra
        int zcifra= pom%10;
        //518%10=8
        //obrada
        s+=zcifra;
        //unistite zadnju cifru
        pom/=10;
      }
      if(i%s ==0)
      {
        printf("Ovaj broj je deljiv svim svojim ciframa: %d\n",i);
      }
    }
    
  }