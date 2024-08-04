#include<stdio.h>
int main(void)
{   int num,s,rev=0,rem=0;
    printf("Enter the required number");
    scanf("%d\n",&num);
    s=num;
    for(int i=0;i<5;i++)
    {   
        rem=s%10;
        rev=rev*10+rem;
        s=s/10;
      }
     if(rev==num)
     {
         printf("Original number and reversed number are equal");
     }
     else
     {
         printf("Original number and reversed number are not equal");
     }
}