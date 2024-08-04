#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    char c;
    int x;
    double d;
}Mystruct;
int main(void)
{
      Mystruct *p = malloc(sizeof(Mystruct));
      if(p)
    {
        p ->c= 'A';
        p ->x= 123;
        p ->d= 456.789;
        printf("The value of c is: %c\n", p ->c);
        printf("The value of x is: %d\n",p ->x);
        printf("The value of d is: %.3f\n",p ->d);
    }
    free(p);
    
}