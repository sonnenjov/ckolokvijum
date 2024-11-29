#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100



int palindromRecenica(int tekst[MAX])
{
   int i,p,j,n=0;
  for ( i = 0; i < strlen(tekst) / 2; i++)
  {
    if (strlen(tekst) == ' ')
    {
      continue;
    }
    
      if (toupper(tekst[i]) != toupper(tekst[strlen(tekst)-1-i]))
      {
        p=0;
        break;
      }
  
  }
  if (p)
  {
    printf("Rec je palindrom;");
  }
  else {
    printf("Rec nije palindrom;");
  }

}

int palindrom(char rec[MAX])
{
  int i,p;
  for ( i = 0; i < strlen(rec) / 2; i++)
  {
      if (toupper(rec[i]) != toupper(rec[strlen(rec)-1-i]))
      {
        p=0;
        break;
      }
  
  }
  if (p)
  {
    printf("Rec je palindrom;");
  }
  else {
    printf("Rec nije palindrom;");
  }

}

int proverBrojaReci(char tekst[MAX])
{
  int i, brojac=0;
  for (i = 1; i < strlen(tekst); i++)
  {
    if ((tekst[i] == ' '  || tekst[i] == '.'|| tekst[i] == ',' || tekst[i] == '!' || tekst[i] == '?' || tekst[i] == ';')  && tekst[i+1] != ' ')
    {
      brojac+=1;
    }
  }
  return brojac+1;  
}
int main()
{
  int i;
  char tekst[MAX],rec[MAX], c;
  
  printf("Unesite tekst: ");
  gets(tekst);

  printf("U recenici ima %d reci", proverBrojaReci(tekst));




  printf("\nUnesite rec za proveru da li je palindrom: ");

  gets(rec);
  return 0;
}