// 1 . Napisati program kojim se na osnovu unetog trocifrenog broja N formiraju trocifreni brojevi sa istim ciframa ali 
// takvi da im srednja cifra nije manja od dve susedne (Na primer, ako se učita 139, to su brojevi 193 i 391; ako se 
// učita 535, to su 553 i 355; za 778, to je 787...). 
#include <stdio.h>
#define MAX 10

void nalazenjeMax(int niz[MAX], int kolicina)
{
  int i, max=0;
  for (i = 0; i < kolicina; i++)
  {
    if (niz[i] > max)
    {
      max= niz[i];
    }
  }
 
}

int unosenjeCifaraUListu(int niz[MAX], int broj)
{
  int i=0, ostatak;
  while (broj>0)
  {
    ostatak=broj%10;    
    niz[i] = ostatak;
    i++;
    broj/=10;
  }
  return i;
}




int main()
{
  int n,a,b,c,nizA[MAX];

  
  printf("Unesite trocifreni broj n: ");
  scanf("%d", &n);
  int brojCifara = unosenjeCifaraUListu(nizA,n);
  nalazenjeMax(nizA, brojCifara);
  return 0;
}