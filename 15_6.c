#include<stdio.h>
typedef struct
{
    char c;
    int x;
    double d;
}Mystruct;
int main(void)
{  Mystruct s={ .x=123,.c='a',.d=456.789};
   printf("Variable of type struct Mystruct is initialized.\n");
   printf("Changing member values..\n");
   s.c='b';
   s.x=456;
   s.d=123.456;
   printf("value of c is: %c\n",s.c);
   printf("value of x is: %d\n",s.x);
   printf("value of d is: %.3f\n",s.d);
}