#include <stdio.h>
#define MAX 100
#include <stdlib.h>


void unosMatrice(int mat[MAX][MAX], int velicinaMat)
{
  int i,j;
  for ( i = 0; i < velicinaMat; i++)
  {
    for (j = 0; j < velicinaMat; j++)
    {
      printf("Unesite [%d][%d] (0(kupus),1(paradajz),2(krompir) ili 3(nepoznato)): ", i,j);
      scanf("%d", &mat[i][j]);
    }
    
  }
  
}


void ispisMatrice(int mat[MAX][MAX], int velicinaMat)
{
  int i,j;
  for ( i = 0; i < velicinaMat; i++)
  {
    for (j = 0; j < velicinaMat; j++)
    {
      printf(" %d ", mat[i][j]);
    }
    printf("\n");
  } 
}




void kretanje(int mat[MAX][MAX], int n)
{
  int i=0,j=0;
  int kupus=0, brojkoraka=0, koraci;
  // int korak;
  printf("Unesite neki od ponudjenih elemenata za kretanje: \n");
  printf("1.(gore)\n");
  printf("2.(levo)\n");
  printf("3.(desno)\n");
  printf("4.(dole)\n");
  printf("5.(exit)\n");
  while (koraci != 5)
  {
  if (koraci=='k')
  {
    break;
  }
  else {
  scanf("%d", &koraci);
  int zeka = mat[i][j];
  // printf("Zeka je na mestu: [%d][%d]\n", i,j);
  if (koraci==1)
  {
    if (j==0)
    {
      printf("Polja su van matrice\n");
      printf("NE MOZETE ICI NA GORE!\n");
      printf("Unesite korak kojim zelite da se krecete sa zekom: \n");

    }
    else {
      j-=1;
      zeka=mat[i][j];
      printf("Zeka je na mestu: [%d][%d]\n", i,j);
      printf("Unesite korak kojim zelite da se krecete sa zekom: \n");

    if (mat[i][j]==0)
    {
      kupus+=1;
      brojkoraka+=1;
      mat[i][j] = 3;
    }
    else {
      brojkoraka+=1;
        }
        }  
  }
  else if (koraci==2)
  {
    if (i==0)
    {
        printf("Polja su van matrice\n");
        printf("NE MOZETE ICI NA LEVO!\n");
    }
    else {
        i-=1;
        zeka=mat[i][j];
        printf("Zeka je na mestu: [%d][%d]\n", i,j);
        
        if (mat[i][j]==0)
        {
          kupus+=1;
          brojkoraka+=1;
          mat[i][j] = 3;
          printf("Kupus pojedden, broj pojedenih kupusa: %d\n", kupus);
        }
        else {
          brojkoraka+=1;
        }
        
    }
  }
  else if (koraci==3)
  {
    if (i==n)
    {
      printf("Polja su van matrice\n");
        printf("NE MOZETE IZI NA DESNO!\n");

    
    }
    else {
        i+=1;
        zeka=mat[i][j];
        printf("Zeka je na mestu: [%d][%d]\n", i,j);
        if (mat[i][j]==0)
        {
          kupus+=1;
          brojkoraka+=1;
          mat[i][j] = 3;
          printf("Kupus pojedden, broj pojedenih kupusa: %d\n", kupus);

        }
        else {
          brojkoraka+=1;
        }
    }  
  }
  else if (koraci==4)
  {
      if (j==n)
    {
      printf("Polja su van matrice\n");
      printf("NE MOZETE ICI NA DOLE!\n");
    }
    else {
      j+=1;
      zeka=mat[i][j];
      printf("Zeka je na mestu: [%d][%d]\n",i, j);
    if (mat[i][j]==0)
    {
      kupus+=1;
      brojkoraka+=1;
      mat[i][j] = 3;
      printf("Kupus pojedden, broj pojedenih kupusa: %d\n", kupus);
    }
    else {
      brojkoraka+=1;
    }
        } 
  }






        }
    }
  printf("Zeka je pojeo %d kupusa u %d koraka!!", kupus, brojkoraka);
}






int main()
{
  int n, mat[MAX][MAX];
  printf("Unesite velicinu za polja po kojima ce zeka da se krece: ");
  scanf("%d", &n);
  unosMatrice(mat, n);
  ispisMatrice(mat, n);
  kretanje(mat,n);
  return 0;
}