#include<stdio.h>
int main(void)
{   int count;
    for(int i=2;i<300;i++)
    {    count =0;
         for(int j=2;j<i;j++)
          { if(i%j==0)
             {  count++;
                 break;
                  }
            }
         if(count==0)
          printf("%d is a prime number\n",i); 
    }
}
  