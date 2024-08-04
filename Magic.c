// Magic number is a number whose continuous sum of digits untill it  give a single digit that is 1//
#include<stdio.h>
int main(void)
{  int n;
   printf("Enter the required number:");
   scanf("%d",&n);
   int rem=0,sum=0;
   while(n>0)
   {  rem=n%10;
      sum=sum+rem;
      n=n/10;
      } 
         

}