#include <stdio.h>
#include <math.h>


int main()
{

float a,b, modul;
printf("Unesite realan deo kompleksnog broja: ");
scanf("%f", &a);
printf("Unesite imaginarni deo kompleksnog broja: ");
scanf("%f", &b);

modul = sqrt(pow(a,2) + pow(b,2));

printf("Modul kompleksnog broja %.2f i i%.2f  je %f",a,b, modul);
}