#include<stdio.h>
int sum(int x)
{  /* int rem,b=0;
    for(int i=0;i<5;i++)
    {  
       rem=x%10;
       b=b+rem;
        x/=10;
    }
   return b; */
   int f,rem;
   if(x==0)
    return (0);
   else
     {  rem=x%10;
        f= rem+sum(x/10);
        return(f);
        }
}

int main()
{
    int num;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    int a=sum(num);
    printf("\nSum of digits of the required number: %d",a);
}