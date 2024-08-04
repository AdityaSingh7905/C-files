#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p= calloc(5,sizeof(*p));
    if(p)
    {
        printf("The initial value are: \n");
        for(int i=0;i<5;i++)
        {  
            printf("%d\t",p[i]);
        }
        // set some values and print them out
        printf("\n New values are:\n");
        for(int i=0;i<5;i++)
        {   p[i]=(i+1)*10;
            printf("%d\t",p[i]);
        }
    }
    free(p);
}