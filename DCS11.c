#include<stdio.h>
int main(void)
{   int year;
    printf("Enter the required letter:");
    scanf("%d",&year);
    (year%4==0)?(printf("Leap year")):(printf("Not a leap year"));

}