// Napisati program kojim se odredjuje vreme prizemljenja aviona koji je uzleteo u x sati, y minuta i z sekundi a u letu proveo q sekundi


#include <stdio.h>

int main()
{
int sati,minuti,sekunde,let,sletanje,satiLeta,minutiLeta,sekundeLeta,pomocna;
printf("U koje vreme je poleteo avion? \n");
printf("Sati: ");
scanf("%d",&sati);
printf("Minuta: ");
scanf("%d",&minuti);
printf("Sekundi: ");
scanf("%d",&sekunde);


printf("Koliko vremena je avion proveo avion u letu?(u sekundama)");

scanf("%d", &let);

satiLeta=let/3600;

minutiLeta=let/60;

printf("Sati leta: %d ",satiLeta);

printf("Minuti leta: %d ",minutiLeta);

if (sekundeLeta>60 || minutiLeta>60)
{
  satiLeta=let/3600;
  pomocna= let -  satiLeta*3600;
  if (sekundeLeta>60)
  {
    minutiLeta=pomocna/60;
    if (minutiLeta>60)
    {
    pomocna= pomocna-minutiLeta*60;
    sekundeLeta=pomocna;
    }
  } 
  
}


  return 0;
}