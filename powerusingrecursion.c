// using the recursion algorithm
#include<stdio.h>
power(int x,int y)
{   int f;
    if(x==1)
     return(y);
     else
      f=y*power(x-1,y);
      return(f);
     
}
int main()
{
    int x,y,pow;
    printf("Enter the required number:");
    scanf("%d %d",&x,&y);
    pow=power(x,y);
    printf("required value is:%d",pow);
}