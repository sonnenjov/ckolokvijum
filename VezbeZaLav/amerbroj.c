#include <stdio.h>
int main()
{

int i,s,j;
    for(i=1;i<=1000;i++)
    {
        s=0;
       for(j=1;j<i;j++){
        if(i%j==0){
            s+=j;   }
       }
        if(s==i){
           printf("%d\n",i);
        }
      
    }
       return 0;
}