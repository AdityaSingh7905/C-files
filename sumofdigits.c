#include<stdio.h>
int main()
{  int  x,s=0,i=0;
    printf("Enter the five digit number:");
    scanf("%d",&x);
    while (x>0)
    
    {  i= x%10;
       s=s+i;
       x=x/10;
    }
      printf("Sum of it's digit is:%d \n",s);
       }