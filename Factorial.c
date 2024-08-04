#include<stdio.h>
factorial(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {  
        f=f*i;
    }
    return(f);
}
int main()
{
    int a,fact;
    printf("Enter the required number:");
    scanf("%d",&a);
    fact= factorial(a);
    printf("Factorial value:%d",fact);
}