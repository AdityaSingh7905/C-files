#include<stdio.h>
int main(void)
{   float i;
    for(int y=1;y<=6;y++)
    {
        for(float x=5.5;x<=12.5;x+=0.5)
        {
            i= 2 + (y + 0.5*x);
            printf("%f %d %f\n",i,y,x);
        }
    }

}