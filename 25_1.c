#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   /*int *p= malloc(sizeof(int));
    if(p)
    {   *p=123;
        printf("The value is: %d\n",*p);
       }
       free(p);
       p=NULL; */
     char *p= malloc(sizeof(char));
     if(p)
     {
         *p='A';
         printf("The value is: %c\n",*p);
     } 
     free(p); 
}    