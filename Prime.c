#include<stdio.h>
int main(void)
{  int num, a=0;
   printf("Enter the number to be checked:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {   if(num%i==0)
        a=a+1;

   }
   if(a==2)
     printf("Given number is a Prime number..");
   else
     printf("Given number is not a Prime number..");
}