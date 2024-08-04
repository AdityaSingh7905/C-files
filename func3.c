#include<stdio.h>
int  myfunction(int a);
int main(void)
{   int x=123;
    printf("The value before function call is:%d \n",x);
    myfunction(x);
    printf("\nThe value after the function call is:%d \n",x);
}
int  myfunction(int a)
{
    printf("Hello World! from a afunction");
    a++;
}