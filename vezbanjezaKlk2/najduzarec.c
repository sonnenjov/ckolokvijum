#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100


tip proveraNajduzeReci(char tekst[MAX])
{
  int i, brojac=0;
  for (i = 0; i < strlen(tekst); i++)
  {
    if ((tekst[i] == ' '  || tekst[i] == '.'|| tekst[i] == ',' || tekst[i] == '!' || tekst[i] == '?' || tekst[i] == ';')  && tekst[i+1] != ' ')
    {
      
    }
    
  }
  

}

int main()
{

  char recenica[MAX];
  printf("Unesite recenicu za proveravanje najduze reci u njoj: ");
  gets(recenica);



  printf(recenica);
  return 0;
}