#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p=malloc(sizeof(int));
     if(p==NULL)
     {    printf("Error allocating the memory.Existing");
          return -1;

     }
     *p=123;
     printf("The value is: %d\n",*p);
     free(p);
}