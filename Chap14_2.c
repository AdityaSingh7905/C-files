#include<stdio.h>
int Multiply(int a,int b)
{
    return a*b;
}
int main(void)
{   int x=123;
    int y=456;
    int z=Multiply(123,456);
    printf("The value returned by the function is:%d\n",z);

}