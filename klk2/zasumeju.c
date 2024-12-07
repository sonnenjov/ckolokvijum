#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


void proveravanjaNajduzeReci(char tekst[MAX], int brojac)
{
  int j;
  for (j = 0; j < brojac; j++)
  {

  }
  
}
void ispisivanjeReceniceUNiz(int n, char tekst[MAX])
{
  int i, max = 0;
  for ( i = 0; i < strlen(tekst); i++)
  {
   if ((tekst[i] == ' '  || tekst[i] == '.'|| tekst[i] == ',' || tekst[i] == '!' || tekst[i] == '?' || tekst[i] == ';')  && tekst[i+1] != ' ')
    {
      int brojduzineReci()
      if (max < i)
      {

      }
      
    }
  }
  
}

int main()
{
  int n, niz[MAX];
  char tekst[MAX];

  printf("Unesite tekst: ");
  gets(tekst);  


  for (int i = 0; i < strlen(tekst); i++)
  {
    printf("%c", tekst[i]);
  }


  


  return 0;
}