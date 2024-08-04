#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p= calloc(1,sizeof(*p));
    if(p)
     {    printf("The initial value is: %d",*p);
         *p=123;
          printf("\nThe value is: %d\n",*p);
          }
     free(p);
}     