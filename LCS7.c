#include<stdio.h>
int main(void)
{   int arr[4][4];
    for(int i=0;i<4;i++)
   {   for(int j=0;j<4;j++)
        {    
           scanf("%d",&arr[i][j]);
           }
      }
      for(int i=0;i<4;i++)
      {
          for(int j=0;j<4;j++)
          {
              printf("%d\t",arr[i][j]);
          }
          printf("\n");
      }
      for(int i=0;i<4;i++)
      {
          for(int j=0;j<4;j++)
          {
              if(i<=j)
              printf("%d\t",arr[i][j]);
              else
              printf("");
          }
          printf("\n");
      }

}