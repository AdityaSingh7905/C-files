#include<stdio.h>
int main(void)
{   int n;
    printf("Enter the required number:");
    scanf("%d",&n);
    int rem=0,rev=0,s;
    s=n;
    while(s>0)
    {   rem=s%10;
        rev=rev*10+rem;
        s=s/10;
       }
    printf("Reversed number is:%d \n",rev);
    if(rev==n)
     printf("Number is a palindrome..");
     else
     printf("Number is not a palindrome..");
      }