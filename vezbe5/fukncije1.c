// funkcije
#include <stdio.h>

// povratni_tip ime_funkcije(parametri){
//   telo_funkcije
// }

//funkcija za racunanje faktorijala

// long zbog broja cifara
long faktorijal(int n)
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
  int a,b;
  printf("Unesite dva cela broja: ");
  scanf("%d %d",&a,&b);

  printf("Faktorijel od broja %d je %ld\n", a, faktorijal(a));
  printf("Faktorijel od broja %d je %ld\n", b, faktorijal(b));
  return 0;
}