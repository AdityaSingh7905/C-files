#include<stdio.h>
int main()
{  int x,s=0,p=0,r=0;
    printf("Enter the four digit number:");
    scanf("%d",&x);
     p=x%10;
     s=s+p;
     while(x>10)
     {
         x=x/10;
     }
     r=x%10;
     s=s+r;
     printf("sum of it's first and last digit is :%d \n",s);
         }







