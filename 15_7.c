// Copying Structures
#include<stdio.h>
typedef struct
{
    char c;
    int x;
    double d;
}Mystruct;
int main(void)
{   Mystruct s1={ 'a', 123, 456.789};
    Mystruct s2;
    s2=s1;    // copying values of s1 into s2
    printf("value of s2.c is: %c\n",s2.c);
    printf("value of s2.x is: %d\n",s2.x);
    printf("value of s2.d is: %.3f\n",s2.d);

}