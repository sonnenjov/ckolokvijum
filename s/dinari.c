 
// 2.28. Саставити програм који учитава вредност производа у динарима, а затим израчунава и 
// приказује колико је потребно новчаница од 500 дин., 100 дин. и 1 дин. за плаћање тог производа. 

#include <stdio.h>

int main()
{
  int cenaProizvoda, dinpetsto, dinsto,dinjedan;

  printf("Cena prozivdoa: ");
  scanf("%d", &cenaProizvoda);

  dinpetsto= cenaProizvoda/500;
  dinsto= (cenaProizvoda%500)/100;
  dinjedan=(cenaProizvoda%500)%100;


  printf("Cena proizvoda je %d, novcanica 500: %d, novcanica 100: %d, novcanica 1: %d",cenaProizvoda,dinpetsto,dinsto,dinjedan);
  return 0;
}