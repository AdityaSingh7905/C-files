#include<stdio.h>
int main()
{  int qty,dis=0;
   float rate,total;
   printf("Enter the no. of items purchased:\n Enter the price of items :");
   scanf("%d %f",&qty,&rate);
    if(qty>1000)
    {  
         dis=10;
    }
    
    total=qty*rate-qty*rate*dis/100;
    printf("Total amount is:%f",total);
      }
