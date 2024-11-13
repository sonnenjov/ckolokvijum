// naredbe skokova
// break,continue,goto

// break za prekid petlje i za prekid switch naredbe





#include <stdio.h>

int main()
{
  int dan;
  printf("Unesi broj: ");
  scanf("%d", &dan);

  switch (dan)
  {
  case 1:
    printf("Ponedeljak");
    break;
  case 2:
    printf("Utorak");
    break;
  case 3:
    printf("Sreda");
    break;
  case 4:
    printf("Cetvrtak");
    break;
  case 5:
    printf("Petak");
    break;
  case 6:
    printf("Subota");
    break;
  case 7:
    printf("Nedelja");
    break;
  
  default:
    printf("GRESKA");
    break;
  }
  return 0;
}