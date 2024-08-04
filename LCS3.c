#include<stdio.h>
int main(void)
{
    int num1,num2,product=1;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    for(int i=0;i<num2;i++)
    {  product*=num1;

    }
    printf("Value of num1 raised to the power of num2: %d\n",product);
}