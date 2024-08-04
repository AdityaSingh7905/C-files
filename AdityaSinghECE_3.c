#include<stdio.h>
int Fibonacci(int b)
{   if(b==0)
      return 0;
    else if(b==1)
           return 1;
         else
           return(Fibonacci(b-2)+Fibonacci(b-1));

}
int main()
{
    int n;
    printf("\nEnter the number of elements you want in fibonacci series:");
    scanf("%d",&n);
    printf("\nRequired fibonacci series is:");
    for(int i=1;i<=n;i++)
    {   int a=Fibonacci(i);
        printf("%d\t",a);

    }
}