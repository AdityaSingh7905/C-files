// Structures as a function arguments
#include<stdio.h>
typedef struct
{
    char c;
    int x;
    double d;
}Mystruct;
void myfunction( Mystruct myparam)
{
    printf("Value of c is: %c\n",myparam.c);
    printf("Value of x is: %d\n",myparam.x);
    printf("Value of d is: %.3f\n",myparam.d);

}
int main(void)
{
    Mystruct s={ 'a',123,456.789};
    myfunction(s);
}