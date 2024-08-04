#include<stdio.h>
int main(void)
{  int year;
   printf("Enter the required year to be checked:");
   scanf("%d\n",&year);
   if(year%4==0)
     printf("Leap year");
   else
     printf("Not a leap year");

}