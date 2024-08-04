#include<stdio.h>
int main(void)
{   int x=-1;
     
     while (x<3)
     {
        
        x=x+1;
        if(x==2)
        {  continue;
          }
          printf("x= %d\n",x);
       }
      return 0;
}