// ulaz: trocifreni broj
// izlaz njegove cifre i sumu cifara
// primer 154 
// cifre = 1 5 i 4
// suma 1+5+4


#include <stdio.h>
#include <math.h>


int main()
{
  int num,n100,n10,n1,sum;
  printf("Uneti tocifreni broj: ");
  scanf("%d", &num);

  n100 = num / 100;
  n10 = (num%100) / 10;
  n1 = ((num%100)% 10) / 1;
  
  printf("%d\n", n100);
  
  printf("%d\n", n10);
  
  printf("%d\n", n1);

  sum = n100 + n10 + n1;

  printf("Zbir svih cifara trocifrenog broja je : %d", sum );
  
  return 0;
}