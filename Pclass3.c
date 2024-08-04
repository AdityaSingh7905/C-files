#include<stdio.h>
int main(void)
{    int sum=0,j;
    printf("Enter the value :");
    scanf("%d",&j);
   for(int i=1;i<=j;i++)
   { 
       scanf("%d",&i);
   }
   for(int i=1;i<=j;i++)
   {
       if(i%2!=0)
       sum=sum+i;
   }
   printf("Sum of odd natural numbers: %d ",sum);

}