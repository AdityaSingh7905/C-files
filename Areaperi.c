#include<stdio.h>
areaperi(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}
int main()
{
    int radius;
    float area,perimeter;
    printf("\nEnter the radius of a circle:");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area= %f",area);
    printf("\nPerimeter= %f",perimeter);
}