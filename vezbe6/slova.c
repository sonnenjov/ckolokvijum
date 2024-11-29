#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int brojPonavljanja(char tekst[MAX], char c)
{
  int broj = 0,i;
  
  for ( i = 0; i < strlen(tekst); i++)
  {
    if (tolower(tekst[i]) == tolower(c))
    {
      broj+=1;
    }
  }
  return broj;
}


// algoritam za proveru ponavljanja slova


char ponavljanjeSlova(char tekst[MAX])
{

  int i,j,p,brojJavljanja, max=0;
  char c;
  for (i = 0; i < strlen(tekst) -1; i++)
  {
    if (tekst[i] == ' '){
      continue;
    }
    p=0;
    for(j = i+1; j < strlen(tekst);j++)
    {
      if (tolower(tekst[i]) == tolower(tekst[j]))
      {
        p=1;
        break;
      }
      
    }
  if (p==0)
  {
    brojJavljanja=0;
    for (j = 0; j <= i; j++)
    {
    if (tolower(tekst[i]) == tolower(tekst[j]))
      brojJavljanja+=1;
    }
    if (brojJavljanja > max)
    {
      max=brojJavljanja;
      c=tekst[i];
    }
  }
  }
  brojJavljanja=0;
    for (j = 0; j <= strlen(tekst); j++)
    {
    if (tolower(tekst[strlen(tekst) -1]) == tolower(tekst[j]))
      brojJavljanja+=1;
    }
    if (brojJavljanja > max)
    {
      max=brojJavljanja;
      c=tekst[i];
    }

    return c;
}


int main()
{
  int i;
  char tekst[MAX], c;
  
  printf("Unesite tekst: ");
  gets(tekst);
  
  printf("Najvise se puta pojavilo slovo %c", ponavljanjeSlova(tekst));
}