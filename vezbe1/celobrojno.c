// ulaz vrednost proizvoda u dinarima
// izlaz koliko je potrebno novcanica od 500, 100 i 1 din za placanje
// Primer ako je 1267 
// 2 od 500
// 2 od 100 
// 67 od 1

#include <stdio.h>


int main()
{
int price, n500, n100, n1;
printf("Unesite cenu proizvoda: ");
scanf("%d", &price);
n500 = price / 500;
n100 = (price % 500) / 100;
n1 = ((price %500) % 100) / 1;

printf("%d %d %d", n500, n100, n1);
printf("Za cenu proizvoda potrebno je %d novcanica od 500, %d novcanica od 100, %d novcanica od 1", n500, n100, n1);
}


