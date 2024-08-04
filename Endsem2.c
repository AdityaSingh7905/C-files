/* use of malloc and realloc functions */
#include<stdio.h>  // header file ,  using it so that we can use its functions during the execution of program
#include<stdlib.h>
int main(void)
{
    int *p= malloc(6*sizeof(int));  // dyanamic allocation of memory using malloc function and declaration of pointer p which points at the beginning of the allocated memory
    if(p)      // checking whether allocation is successful or not by usinf if statement
    {   printf("Allocated an array of six members and it takes %d bytes.\n",6*sizeof(int));
        printf("address of the allocated array: %d\n",p);
    }
    int *pnew = realloc(p , 8*sizeof(int)); // resizing of allocated memory using realloc function
    if(pnew)  // checking whether allocation is successful or not by using if statement
    {   printf("Resizing the allocated memory..");
        printf("The allocated memory is now %d bytes long.\n",8*sizeof(int));
        printf("address of the newly allocated array: %d\n",pnew);
        free(pnew); // freeing up the allocated memory to avoid memory leak
    }
    else
    {
        free(p);  // freeing memory
    }

}  // closing braces
// Clearly from the output we can see that the starting address of the previous and newly allocated memory is same..