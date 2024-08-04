// dyanamic allocation of memory for structures
#include<stdio.h>
#include<stdlib.h>
typedef struct Mystruct Mystruct;
struct Mystruct
{
    char c;
    int x;
    double d;
};
int main(void)
{   Mystruct *p= malloc(sizeof(Mystruct));
    if(p)
    {
        p->c='A';
        p->x=123;
        p->d=456.789;
        printf("The value is: %c\n",p->c);
        printf("The value is: %d\n",p->x);
        printf("The value is: %.3f\n",p->d);
    }
    free(p);
}