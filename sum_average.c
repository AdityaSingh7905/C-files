#include<stdio.h>
sum(b1,b2,b3,b4,b5)
int b1,b2,b3,b4,b5;
{
    int s1;
    s1= b1+b2+b3+b4+b5;
    return(s1);
}
float average(int b1,int b2,int b3,int b4,int b5)
{
    float s2 = (b1+b2+b3+b4+b5)/5;
    return(s2);
}

int main()
{
    int a1,a2,a3,a4,a5;
    printf("Enter the required numbers :");
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    int s= sum(a1,a2,a3,a4,a5);
    float t= average(a1,a2,a3,a4,a5);
    printf("Sum of these numbers :%d\n",s);
    printf("Average of these numbers :%f",t);
}