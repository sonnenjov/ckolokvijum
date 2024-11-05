// 15.	Za učitani binarni broj ispisati ekvivalent u decimalnom brojnom sistemu. Na primer binarni broj 1011000 ima decimalni ekvivalent:
// 1*26+0*25+1*24+1*23+0*22+0*21+0*20
#include <stdio.h>
#include <math.h>
int main() {
printf("\n\n_____Konvertovanje iz binarnih u decimalni_____\n\n");

int binarni,baza=1,ostatak, decimalni=0;
printf("Unesite binarni broj: ");
scanf("%d", &binarni);

printf("Uneti binarni broj: %d\n", binarni);
while (binarni > 0)
{
  ostatak=binarni%10;
  decimalni= decimalni + ostatak*baza;
  binarni/=10;
  baza=baza*2;
}

  printf("A njegov decimalni ispis je: %d\n", decimalni);
}