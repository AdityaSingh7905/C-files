#include<stdio.h>
int myfunc()
{
    
    printf("The statement is not executed...");
    return 10;

}
int main(void)
{   int x;
    x=myfunc();
    printf("\nThe value returned by the function is:%d \n",x);
  }