/* The switch statement executes a code based on integral expression value */
#include<stdio.h>
int main(void)
{ char c='a';
   switch (c)
    {  case 'a':
              printf("The value of c is 'a'.\n");
              break;
       case 'b':
              printf("The value of c is 'b'.\n");
              break;
       case 'c':
              printf("The value of c is 'c'.\n");
              break;
        default :
              printf("None of the above value matches the value of c.\n");
               break;
                }
    }