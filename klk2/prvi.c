#include <stdio.h>



long fakt(long n)
{
  int i;
  long f=1;
  for ( i = 1; i <=n; i++)
  {
    f*=i;
  }
  return f;
}


int main()
{
  long n,k, faktorijalN, faktorijalK,faktorijalRazlike,  c;
  printf("Unesite broj n: \n");
  scanf("%ld", &n);
  printf("Unesite broj k: \n");
  scanf("%ld", &k);
  faktorijalN= fakt(n);
  printf("Fakt n: %ld\n", faktorijalN);
  faktorijalK= fakt(k);
  printf("Fakt k: %ld\n", faktorijalK);
  long razlika = n-k;
  faktorijalRazlike=fakt(razlika);
  printf("Fakt razlike: %ld\n", faktorijalRazlike);
  c=faktorijalN/(faktorijalK*faktorijalRazlike);

  printf("Rezultat je: %ld", c );

  return 0;
}