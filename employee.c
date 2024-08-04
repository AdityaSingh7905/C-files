#include<stdio.h>
int main(void)
{  int cy,yoj,yr_of_ser,bonus;
   printf("Enter the current year and year of joining of employee:");
   scanf("%d %d",&cy,&yoj);
   yr_of_ser=cy-yoj;
   if(yr_of_ser>3)
   {
       bonus=2500;
       printf("bonus = Rs.%d",bonus);
   }

    }