#include <stdio.h>
#include <math.h>

// ulaz: koordinate temena trougla
// izlaz: povrsina trougla kroz formule prikazane u zadatku 


int main() 
{
  double xA,xB,xC,yA,yB,yC,a,b,c,S,P;

  printf("Uneti x koordinate za prvo teme a(xA,yA): ");
  scanf("%lf%lf",&xA,&yA);
  printf("\n");
 
  printf("Uneti x koordinate za  teme b(xB,yB): " );
  scanf("%lf%lf",&xB,&yB); 
  printf("\n");

  printf("Uneti x koordinate za teme c(xC,yC): ");
  scanf("%lf%lf",&xC,&yC);
  printf("\n");

  a = sqrt(pow(xB-xC,2) + pow(yB-yC,2));
  b = sqrt(pow(xC-xA,2) + pow(yC-yA,2));
  c = sqrt(pow(xA-xB,2) + pow(yA-yB,2)); 
  printf("A je: %lf\n", a);
  printf("B je: %lf\n", b);
  printf("C je: %lf\n", c);

  S = (a+b+c) /2;
  P =  sqrt(S * (S-a)*(S-b)*(S-c));

  printf("S je: %.2f\n", S);
  
  
  
  
  
  printf("P je: %.2f\n", P);



}