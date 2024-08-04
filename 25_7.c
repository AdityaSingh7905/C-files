#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p= malloc(sizeof(int));
    printf("Allocated %d bytes.\n",sizeof*p);
    printf("Resizing allocated memory..\n");
    int *pnew= realloc(p,10*sizeof(*p));
    printf("The memory size is now %d bytes long.\n",10*sizeof(*p));
}