#include<stdio.h>
int main(void)
{  int myarr[5];
   for(int i=0;i<5;i++)
   {
       scanf("%d \n",&myarr[i]);
   }
   for(int j=0;j<5;j++)
   {
       printf("myarr[%d]= %d \n",j,myarr[j]);
   }
     }