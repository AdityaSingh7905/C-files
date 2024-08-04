/* The switch statement executes a code based on integral expression value */
#include<stdio.h>
int main(void)
{ int x=789;
   switch(x)
    {  case 100:
              printf("The value of x is 100.\n");
              break;
       case 123:
              printf("The value of x is 123.\n");
              break;
       case 456:
              printf("The value of x is 456.\n");
              break;
        default :
               printf("None of the above value matches the value of x.\n");
               break;
                }
    }