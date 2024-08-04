// We can also initialise a structure in different method by using so called DESIGNATED INITIALIZERS
#include<stdio.h>
typedef struct
{
    char c;
    int x;
    double d;
}Mystruct;
int main(void)
{
    Mystruct s = { .x=123, .c='q', .d=456.789};
    printf("value of c is: %c\n",s.c);
    printf("value of x is: %d\n",s.x);
    printf("value of d is: %f\n",s.d);
}