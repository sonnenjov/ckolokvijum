// 10.	Napisati program kojim se za vrednost -1 ≤ x ≤ 1 aproksimativnom formulom izračunava vrednost ex sa greškom aproksimacije 10-7.


// generalno je problem sto formula ne deluje tacno, pa sam je modifikovao ovako, ako neko skonta da treba drugacije javljajte

// (1*x/8 + (1/2)* (x/8)^2 + (1/6)* (x/8)^3........1/n*(n+1)*(x/8)^n)^8
#include <stdio.h>
#include <math.h>
int main()
{
  int n=8; //ovo sam stavio kao stalnu vrednost ne znam je l sigurno ovako
  
  float formula=0,x,prviSabirak, drugiSabirak,ceoSabirak; // koliko sam skontao iz zadatka mora sve u float zbog tacnosti nisam siguran
  
  printf("Unesite vrednost x(-1<=x<=1): ");
  scanf("%f", &x); //vrednost x



  for (int i = 1; i < 5; i++) // ovo je za ovaj deo formule gde ide do 5 pow() iteracija
  {
  prviSabirak= 1.0/(i*(i+1)); // prvi deo
  printf("Prvi sabirak: %f\n", prviSabirak);
  drugiSabirak=pow(x/n,i); // drugi deo 
  printf("Drugi sabirak: %f\n", drugiSabirak);
  ceoSabirak= prviSabirak*drugiSabirak; //celi deo koji se dodaje u formulu
  printf("Ceo sabirak: %f\n", ceoSabirak);
  formula+=ceoSabirak; // formula
  printf("Formula: %f\n", formula);
  }

  float finalnaFormula=pow(formula,n);
  printf("Formula: %.7f", finalnaFormula);
  


  return 0;
}