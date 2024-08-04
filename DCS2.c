#include<stdio.h>
int main(void)
{   int num;
    printf("Enter the required number:");
    scanf("%d \n",&num);
    if(num%2==0)
      printf("Even number");
    else
      printf("Odd number");
    }