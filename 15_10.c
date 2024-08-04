#include<stdio.h>
struct Mystruct
{
    char c;
    int x;
    double d;
};
struct Mystruct createStruct(char cparam, int xparam, double dparam)
{
    struct Mystruct temps;
    temps.c= cparam;
    temps.x= xparam;
    temps.d= dparam;
    return temps;
}
int main(void)
{   struct Mystruct s;
    s = createStruct('a',123,456.789);
    printf("Value of c is: %c\n",s.c);
    printf("Value of x is: %d\n",s.x);
    printf("Value of d is: %.3f",s.d);

}