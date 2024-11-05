#include <stdio.h>

int main(){
  
int broj,i=1,zbir=0;
printf("unesite jedan broj:\n");
scanf("%d",&broj);
while (i<broj)
{

   if (broj%i==0)
   {
      zbir+=i;
   }
  i++;
}
if (broj==zbir)
{
   printf("broj %d je savrsen",broj);
}
else {
   printf("broj %d nije savrsen",broj);      
}
return 0;
}