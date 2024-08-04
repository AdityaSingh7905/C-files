#include<stdio.h>
int main()
{  int age,amount,total;
   char health,sex,lives;
   printf("Enter the age and policy amount:");
   scanf("%d %d",&age,&amount);
   printf("Enter the health condition, sex and locality:");
   scanf("%s %s %s",&health,&lives,&sex);
   if((health=='E')&&(age>=25&&age<=35)&&(sex=='M')&&(lives=='C')&&(amount<=200000))
   { printf("Person is insured\nPremium rate is Rs. 4 per thousand");
     total=(amount/1000)*4;
     printf("\nMaximum amount for which he can be insured:%d\n",total);
   }
   else
   {  if((health=='E')&&(age>=25&&age<=35)&&(sex=='F')&&(lives=='C')&&(amount<=100000))
      {   printf("Person is insured\nPremium rate is Rs. 3 per thousand ");
          total=(amount/1000)*3;
          printf("\nMaximum amount for which he can be insured:%d\n",total);
        }
     else
     {  if((health=='P')&&(age>=25&&age<=35)&&(sex=='M')&&(lives=='V')&&(amount<=10000))
        {   printf("Person is insured\nPremium amount is Rs. 6 per thousand");
            total=(amount/1000)*6;
            printf("\nMaximum amount for which he can be insured:%d\n",total);
           }
      else
        {
            printf("Person is not insured");
           }
          }
   }
} 
