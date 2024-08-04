#include<stdio.h>
float printmessage(void)
{
    printf("Hello World in C\n");
}
int printsum(int x,int y)
{
    return x+y;
}
int main(void)
{
    printmessage();
    int sum=printsum(100,20);
    printf("The sum of x and y is: %d\n", sum);
}