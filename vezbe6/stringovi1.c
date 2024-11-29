#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
  int i;
char prvoIme[15], drugoIme[15];
printf("Unesite ime: ");
gets(prvoIme);
int n = strlen(prvoIme);
// printf("Uneto ime  %d karaktera: ", n);
printf(prvoIme);
strcpy(drugoIme,prvoIme);
// printf("Kopija imena je  : ");
puts(drugoIme);


// petlja koja pretvara sva slova u velika

// for (i = 0; drugoIme[i] != '/0;i++)

for ( i = 0; i < n; i++)
{
  char v = toupper(drugoIme[i]);
  printf("%c", v);
  drugoIme[i] = v;
}



  return 0;
}