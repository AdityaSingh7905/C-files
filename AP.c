#include<stdio.h>
int main(void)
{  int a=3,d=4,n,sum ;
   printf("Enter the number of terms: ");
   scanf("%d",&n);
   for( int i=1;i<=n;i++)
   {
       sum = sum+(a+(i-1)*d);
   }
   printf("Sum of the n terms of AP: %d \n",sum);
     }