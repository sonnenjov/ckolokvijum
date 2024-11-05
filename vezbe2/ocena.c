#include <stdio.h>


int main()
{
  int points;
  printf("Koliko bodova ste imali na ispitu?\n");
  scanf("%d", &points);

  if (points >= 0 && points <= 50)
  {
    printf("Vasa ocena je: F");
  } 
  else if (points >= 51 && points <= 60)
  {
    printf("Vasa ocena je: E");
  } 
  else if (points >= 61 && points <= 70)
  {
    printf("Vasa ocena je: D");
  } else if (points >= 71 && points <= 80)
  {
    printf("Vasa ocena je: C ");
  }
   else if (points >= 81 && points <= 90)
  {
    printf("Vasa ocena je: B");
  } else if (points >= 91 && points <= 100)
  {
    printf("Vasa ocena je: A");
  } else {
    printf("Neispravan unos");
  }
  
}