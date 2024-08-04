#include<stdio.h>
int main(void)
{
    int num,pdt=1;
    printf("Enter the number whose factorial has to be find:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {   pdt=pdt*i;
        }
    printf("Factorial value of a given number %d is: %d\n",num,pdt);   
}