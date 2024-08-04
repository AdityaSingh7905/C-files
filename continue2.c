#include<stdio.h>
int main(void)
{  int i,j;
   for(i=1;i<3;i++)
   {
       for(j=1;j<3;j++)
       {   if(i==j)
              continue;
           printf("\n%d %d",i,j);   

       }
   }

}