#include<stdio.h>
int main(void)
{   int cp,sp,profit,loss;
    printf("The cost price of the item and the selling price of the item is:");
    scanf("%d  %d\n",&cp,&sp);
    
    if(sp>cp)
    {  printf("Profit");
       profit= sp-cp;
       printf("\nThe required profit is:%d \n",profit);
      }
     if(cp>sp)
     {  printf("Loss");
         loss=cp-sp;
         printf("\nThe required loss is:%d \n",loss); } 
         }
