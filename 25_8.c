#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p= malloc(sizeof(int));
    if(p)
    {
        printf("Allocated %d bytes.\n",sizeof(*p));

    }
    int *pnew= realloc(p,10*sizeof(int));
    if(pnew)
    {
        printf("Resizing allocated memory..");
        printf("\nThe memory size is now: %d bytes long.\n",sizeof(int));
       //reallocation successful,free the new pointer
       free(pnew);
    }
    else
    {
        // if reallocation fails, free the original pointer
        free(p);
    }
}