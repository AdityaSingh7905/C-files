#include<stdio.h>
int main(void)
{  int n;
   printf("Enter the required number:");
   scanf("%d",&n);
   int sum=0;
   for(int i=1;i<n;i++)
   {   if(n%i==0)
       sum=sum+i;
      }
    if(sum==n)
    printf("It is a perfect number.");
    else
    printf("It is not a perfect number.");  
    }