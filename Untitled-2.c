#include<stdio.h>
int main(void)
{  float sum,pro;
   int num;
   printf("Enter the number of terms:");
   scanf("%d\n",&num);
   for(float i=1.0;i<=num;i++)
   {    pro=1.0;
        for(float j=1.0;j<=i;j++)
        {  pro=pro*j;
           }
        sum+= i/pro;
   } 
   printf("Sum of first n terms of following series is: %f\n",sum);
}