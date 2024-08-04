#include<stdio.h>
int main(void)
{  int m1,m2,m3,m4;
    float m5, per;
    printf("Enter marks in five subjects :");
    scanf("%d %d %d %d %f",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    printf("Total percentage: %f \n",per);
    if(per>=60)
      printf("First Division");
    else
    {
        if(per>=50)
         printf("Second Division");
         else
         {
             if(per>=40)
             printf("Third Division");
             else
             printf("Fail");
         }
    }
}