#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=malloc(10*sizeof(int));// dyanamically requesting memory in the heap
    if(p)
    {
        printf("\nEnter the array elements from the user:");
        for(int i=0;i<10;i++)
        {   
            scanf("%d",&p[i]);
           
         }
        printf("\nThe array elements are:");
        for(int i=0;i<10;i++)
        {
           printf("%d\t",p[i]);
          
        }
    }    
    free(p); // to avoid memory leak
   
}