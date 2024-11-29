// 4. Napisati program kojim se za dati prirodan broj X formira broj Y sastavljen od istih cifara ali u obrnutom poretku, 
// a zatim ispituje da li je broj X+Y potpun kvadrat. 
#include <stdio.h>
#include <math.h>
#define MAX 10

// napravih svoju za stepenovanje jer mi math.h pow nije radila kako treba, ovde sam oduzeo n-1 jer mi je trebalo da krene od 100 mnozenja sa cifrom a ono je zbog broja cifara mnozilo sa 10na3 je 1000
int stepenovanje(int x,int n)
{
    int i;
    int baza = 1;
    n-=1;
    for (i = 0; i < n; ++i)
        baza *= x;
    return(baza);
}

// uzimam funkciju pravljenje niza i ispisujem direktno sve cifre broja x u niz, samim tim sto idem n%10, u nizu ce da budu cifre obrnute kao sto treba za broj y
int pravljenjeNiza(int niz[MAX], int n)
{
  int i = 0;
  while (n>0)
  {
    niz[i] = n%10;
    n/=10;
    i++;
  }
  return i;
}

// funkcija za proveru u terminalu da li je broj obrnut
void ispisivanjeNiza(int niz[MAX], int broj)
{
  for (int i = 0; i < broj; i++)
  {
    printf(" %d ", niz[i]);
  }
}
// ovde uzimamo n broj cifara kako bi odradili iteraciju kroz niz i pretvorili ga u broj 
int pravljenjeBrojaY(int niz[MAX], int n)
{
  int i, yBroj=0,brojMnozenja,pom=n;
  for ( i = 0; i < n; i++)
  {
    
    brojMnozenja= stepenovanje(10, pom);
    yBroj+= (niz[i] * brojMnozenja);
    pom-=1;

  }
  return yBroj;
}

// ovde mi fali jos samo funkcija za odredjivanje potpunog kvadrata sto ne znam trenutno kako 


int main()
{
  int x,y, niz[MAX], brojCifara;
  printf("Unesite prirodni broj x: ");
  scanf("%d",&x);
  brojCifara=pravljenjeNiza(niz, x); // ovde se u varijablu upisuje broj cifara kako bi mogli da prolazimo kroz niz u buducnosti a samim tim i ispunjava niz preko funkcije pravljenjeNiza
  ispisivanjeNiza(niz,brojCifara);
  y=pravljenjeBrojaY(niz,brojCifara);
  return 0;
}