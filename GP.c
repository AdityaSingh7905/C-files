#include<stdio.h>
int main(void)
{ int a=3,r=4,n,sum=0;
  printf("Enter the number of terms:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {    
     sum=sum+a;
     a=a*r;
  }
   printf("Sum of n terms of GP: %d \n",sum);
   }