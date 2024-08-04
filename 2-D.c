#include<stdio.h>
int main()
{
   int s[4][2]={ {1234,56},{1212,33},{1434,80},{1312,78}};
   for(int i=0;i<4;i++)
   {
       printf("\n");
       for(int j=0;j<2;j++)
       {
           printf("%d\t",*(*(s+i)+j));
       }
   }
     
 



}