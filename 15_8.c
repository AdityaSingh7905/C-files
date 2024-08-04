// Pointers to Structures
#include<stdio.h>
struct Mystruct
{
    char c;
    int x;
    double d;
};
int main(void)
{
    struct Mystruct s ={'a',123,456.789};
    struct Mystruct *ps=&s;
    //printf("value of c is: %c\n",(*ps).c);
    //printf("value of x is: %d\n",(*ps).x);
    //printf("value of d is: %.3f\n",(*ps).d); 
    printf("value of c is: %c\n",ps->c);
    printf("value of x is: %d\n",ps->x);
    printf("value of d is: %.3f\n",ps->d);
}