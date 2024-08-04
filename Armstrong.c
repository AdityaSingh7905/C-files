#include<stdio.h>
int main(void)
{   int num,a,b=0,rem=0,sum=0;
    printf("Enter the required number:");
    scanf("%d\n",&num);
    a=num; 
    for(int j=0;j<3;j++)
        {  rem=a%10;
           sum=sum+(rem*rem*rem);
           a/=10;
        }
        if(sum==num)
        {    printf("Armstrong number is: %d\n",sum);
          }
        else
        {   printf("Not a Armstrong number..");

        }
}