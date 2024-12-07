// pokazivaci 

#include <stdio.h>
#define MAX 10
void zamena(int *pa, int *pb)
{
  int pom = *pa;
  *pa=*pb;
  *pb=pom;
}

void unos(int niz[MAX], int n)
{
  int i;
  printf("Unesite elemente niza: \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);
  }
};


void maksminNiza(int niz[MAX], int n, int *min, int *max)
{
  int i=0;
   *max = niz[0];
   *min=niz[0];
  for ( i = 0; i < n; i++)
  {
    if (niz[i] > *max)
    {
      *max= niz[i];
    }
    if (niz[i] < *min)
    {
      *min = niz[i];
    }
  }
  
}


int main()
{

  int  niz[MAX], max, min;

  unos(niz, 6);
  maksminNiza(niz, 6, &min, &max);


  printf("Maksimalni je %d", max);
  printf("Minimalmii je %d", min);
  // printf("a = %d\n",a);
  // printf("a = %d\n",b);

  // printf("a = %d\n",a);
  // int *pa; // null pokazivac, ne pokazuje ni na sta
  // int *pa = &a;
  // int *pa = &a, *pb = &b;
  // zamena(pa, pb);
  // printf("a = %d\n",a);
  // printf("a = %d\n",b);

//   printf("Adresa: %d\n",&a);
//   printf("Vrednost pokazivaca: %d\n",*pa);
//   printf("Pokazivac pokazuje na adresu : %d\n",pa);
  
//   *pa = 11;
//   printf("a = %d\n",a);

// printf("Adresa: %d\n",&a);
//   printf("Vrednost pokazivaca: %d\n",*pa);
//   printf("Pokazivac pokazuje na adresu : %d\n",pa);
  return 0;
}