
// 9.36. Саставити рекурзивну функцију за рачунање биномног  
// коефицијента. Затим саставити програм који користећи претходну  
// функцију исписује Паскалов троугао за унети цео број n.  
// Изглед Паскаловог троугла за n=7 је приказан на следећој слици: 

#include <stdio.h>


int binKoefRek(int n, int k){
  return (k>0 && k<n) ? binKoefRek(n-1,k-1)+ binKoefRek(n-1, k) : 1;
  
}

int main()
{

  return 0;
}