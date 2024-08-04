/* Passing by address in function*/
#include<stdio.h>
void myfunction(int *x)
{
    *x=456;
}
int main(void)
{  int a=123;
   printf("The value before the function call:%d \n",a);
   myfunction(&a);
   printf("The value after the function call:%d \n",a);

   }