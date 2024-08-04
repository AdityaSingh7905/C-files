/*Demonstration of nested loops*/
#include<stdio.h>
int main(void)
{
    int i,j,sum=0;
    for(i=0;i<=3;i++)
    {   for(j=0;j<=2;j++)
         {   sum=i+j;
             printf("i=%d j=%d sum=%d\n",i,j,sum);
           
           }


    }
}