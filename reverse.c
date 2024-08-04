#include<stdio.h>
int main()
{ int x,rem=0,rev=0;
  printf("Enter the five digit number:");
  scanf("%d",&x);
  while(x>0)
  {  rem=x%10;
     rev=rev*10+rem;
     x=x/10;
    }

    printf("Reverse number is :%d \n",rev);
   }