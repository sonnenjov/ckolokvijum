// ako se ucitavaju parovi tacaka (a,b) i (c,d) koji oznacavaju dva polja gde je prvi broj u apru horizontala a drugi vertrikala ispisati da li su polja iste boje

// horizontala i vertikala od 1 do 8
// a,b i c,d
// c b c b c b c b
// c b c b c b c b
// c b c b c b c b
// c b c b c b c b
// c b c b c b c b

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{ 
  int a,b,c,d, pos1, pos2;

  printf("Unesite parove sledecih tacaka : a, b, c i d kako bi tacke u sahovskoj tabli velicine 8x8(64) imale parametre u vidu Pozicija1(a,b) i Pozicija2(c,d) i odredjivale boju polja i da li su polja iste boje.: \n");

  printf("A: ");
  scanf("%d", &a);
  printf("B: ");
  scanf("%d",  &b);
  
  printf("C: ");
  scanf("%d", &c);
  printf("D: ");
  scanf("%d", &d);
  pos1 = (abs(a - b) % 2);
  pos2 = (abs(c - d) % 2);


  printf("Pozicija 1(A,B)= %d\n\n", pos1);
  printf("Pozicija 2(C,D)= %d\n\n", pos2);

  if (pos1 == 0 && pos2 == 0)
  {
       printf("Polje AB ima pozicije: A=%d i B=%d\n\n", a,b);
       printf("Polje CD ima pozicije: C=%d i D=%d\n\n", c,d);
       printf("Oba polja su crna\n\n");
  } else if (pos1 == 1 && pos2 == 1) {
     printf("Polje AB ima pozicije: A=%d i B=%d\n\n", a,b);
       printf("Polje CD ima pozicije: C=%d i D=%d\n\n", c,d);
       printf("Oba polja su bela\n\n");
  } else if (pos1 == 0 && pos2 == 1) 
  {
       printf("Polje AB ima pozicije: A=%d i B=%d\n\n", a,b);
       printf("Polje AB je crno\n\n");
       printf("Polje CD ima pozicije: C=%d i D=%d\n\n", c,d);
       printf("Polje CD je belo\n\n");

  } else if (pos1 == 1 && pos2 == 0) 
  {
       printf("Polje AB ima pozicije: A=%d i B=%d\n\n", a,b);
       printf("Polje AB je belo\n\n");
       printf("Polje CD ima pozicije: C=%d i D=%d\n\n", c,d);
       printf("Polje CD je crno\n\n");

  } else {
    printf("Parametri ne zadovoljavaju standard.\n\n");
  }
  return 0;
}