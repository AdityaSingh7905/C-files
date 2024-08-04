#include<stdio.h>
void leap(int yr)
{
    if(yr%4==0)
     printf("Given year is a leap year.");
     else
      printf("Given year is not a leap year.");
}
int main()
{
    int yr;
    printf("Enter the year to be checked:");
    scanf("%d",&yr);
    leap(yr);
}