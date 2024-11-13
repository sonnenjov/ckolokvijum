// 13.	Ako se molekul sumporne kiseline H2SO4 sastoji iz dva atoma vodonika, jednog atoma sumpora i četiri atoma kiseonika, napisati program koji određuje maksimalan broj molekula sumporne kiseline koji se može formirati od datih A atoma vodonika, B atoma sumpora i C atoma kiseonika.


#include <stdio.h>

int main()
{
  int vodonik,kiseonik,sumpor,brojMolekula=0;
  printf("Unesite broj vodonika(H): ");
  scanf("%d", &vodonik);
  printf("Unesite broj kiseonika(O): ");
  scanf("%d", &kiseonik);
  printf("Unesite broj sumpora(S): ");
  scanf("%d", &sumpor);

  while (vodonik>=2 && kiseonik>=4 && sumpor>=1)
  {
    brojMolekula++;
    vodonik-=2;
    kiseonik-=4;
    sumpor-=1;
  }
    
    printf("Od datih datoma moze se napraviti %d molekula sumporne kiseline(H2SO4)\n",brojMolekula);
    printf("Ostatak kiseonika: %d",kiseonik);
    printf("Ostatak vodonika: %d",vodonik);
    printf("Ostatak sumpora: %d",sumpor);
  

  return 0;
}