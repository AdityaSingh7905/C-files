#include<stdio.h>
int main(void)
{   for(int i=0;i<10;i++)
    {   int hrs,overtime=0;
        printf("no. of overtime hours of employee:");
        scanf("%d",&hrs);
        if(hrs>40);
       { overtime=overtime+12*hrs;
         printf("Overtime pay of employees is: %d\n",overtime);
       }
    }
}