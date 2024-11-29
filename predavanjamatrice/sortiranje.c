#include <stdio.h>
#define MAX 10
void sortiranje(int niz[MAX], int n)
{
  int i,j,pom;
    for ( i = 0; i < n-1; i++)
  {
    for (j = i+1; j < n; j++)
    {
      pom=niz[i];
      niz[i]=niz[j];
      niz[j]=pom;
    }
}



void dodavanje(int niz[MAX]){

}
int main()
{
  int niz[MAX],n ,i ,j ,pom;


}
  

  return 0;
}