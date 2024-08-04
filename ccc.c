#include<stdio.h>
int main(void)
{  int i=0,x,s;
    printf("Enter the five digit number:");
    scanf("%d \n",&x);
    while (i<5)
    
    {  s= x%10;
       s=0+s;
       x=x/10;
       i=i+1;
    }
      printf("Sum of it's digit is:%d \n",s);
       }