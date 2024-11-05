// Napraviti program koji 
// ispisuje sve trocifrene 
// Amstrongove brojeve. To su brojevi koji
// su jednaki zbiru kubova svojih cifara

// primer 345 = (3na3)27 + (4na3)64 + (5na3)125 =   216

#include <stdio.h>
#include <math.h>

int main ()
{
  int i,a,b,c,broj;
  for(i=100; i<=999;i++)
  {
    a = i/100;
    b =((i%100) - ((i%100)%10))/10;
    c = (i%100)%10;
   
    broj = pow(a,3) + pow(b,3) + pow(c,3);
    if(broj == i)
    {
      printf("Amstrongov trocifreni broj je: %d\n", i);
    }
   
  }
  return 0;
}