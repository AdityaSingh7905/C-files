#include<stdio.h>
int main(void)
{   int x=10;
    int y=20;
    printf("The values of x and y before change: %d %d\n",x,y);
    int *p;
    p=&x;
    *p=100;
    p=&y;
    *p=200;
    printf("The values of x and y after change: %d %d\n",x,y);


}