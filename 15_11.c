// Call by value ....
#include<stdio.h>
struct Mystruct
{
    char c;
    int x;
    double d;

};
void myfunction(struct Mystruct *myparam)
{
    printf("Value of c is: %c\n",myparam->c);
    printf("Value of x is: %d\n",myparam->x);
    printf("Value of d is: %.3f\n",myparam->d);
}
int main(void)
{
    struct Mystruct s = { 'a',123,456.789};
    myfunction(&s);
}