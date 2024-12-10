#include <stdio.h>
#define PI 3.14
#include <math.h>

// long faktorijel(int n) {
//   int i;
//   int f=1;
//   for (i = 1; i <=n; i++)
//   {
//       f*=i;
//   }
//   return f;
// }







// int main()
// {
//   int a = 5;
//   long faktorij = faktorijel(a);

//   printf("%ld", faktorij);
//   return 0;
// }

// p = 4r^2 pi
// z = (4/3)*r^3pi

// double povrsina(double n)
// {
//   double formula;
//   formula = 4 * pow(n,2) * PI;
//   return formula;
// }

// double zapremina(double n)
// {
//   double formulaZ = (4/3) * pow(n,3) * PI;
//   return formulaZ;
// }



// int main()
// {
//   double n;
//   printf("Unesite poluprecnik:");
//   scanf("%lf", &n);
//   double p = povrsina(n);
//   printf("%.2f\n", p);
//   double z = zapremina(n);
//   printf("%.2f", z);
// }

// long faktorijel(int n)
// {
//   int fakt=n;
//   if (n==1){
//     return 1;
//   }
//   return fakt * faktorijel(n-1);
// }

// int main()
// {
//   long f = faktorijel(5);

//   printf("%ld", f);
//   return 0;
// }

void unos(int niz[100], int n)
{
  int i;
  // ispiste sve elemente
  for (i = 0; i < n; i++)
  {
    printf("s\n");
    scanf("%d", &niz[i]);
  }
  
}

void ispis(int niz[100], int n)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    printf(" %d ", niz[i]);
  }
    printf("\n");
  
}

void sortiranje(int niz[100], int n)
{
  int i,j;
  int max;
  for ( i = 0; i < n; i++)
  {
    max=niz[i];
    for (j = 0; j < n; j++)
    {
      if (max < niz[j]) {
        // ovde u unutrasnjem nizu navodimo max da je jednak elementu koji je u unutrasnjoj for petlji i zbog duple for petlje, kada se izrazi maksimum kao npr niz[j] on zatim prelazi kroz celu spoljasnju for petlju dok je niz[i] < niz[j] npr: 1,2,3,4,5,6
        // ovde necu pisem tacno koje korake radim al skontacete po ovim nazivima
        // max=niz[i](sto mu dodje na pocetku prvi el)
        // if 1 > 1
        // if 2 > 1
        // max=2
        // niz[j] sto mu dodje 2 prelazi na mesto measta 1 i nastavlja se u tom pravcu petlja 
        // 
        //  
        max=niz[j]; 
        niz[j] = niz[i];
        niz[i] = max;
      }
    }
    
  }
  
}

int main()
{
  int niz[100];
  int broj = 10;

  unos(niz,broj);
  ispis(niz, broj);
  sortiranje(niz, broj);
  ispis(niz, broj);

}