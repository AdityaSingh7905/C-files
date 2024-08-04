/* Execution of a loop an unknown number of times*/
#include<stdio.h>
int main()
{  char another='y';
   int num;
   while(another=='y')
   {  printf("Enter the number:");
      scanf("%d",&num);
      printf("Square of %d is %d",num,num*num);
      printf("\nWant to enter another number y/n");
      scanf("%s",&another);

   }

}