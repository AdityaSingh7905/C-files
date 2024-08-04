#include<stdio.h>
void PrintArray(int A[],int n)
{
   for(int i=0;i<n;i++)
   {
      printf("%d\t",A[i]);
   }
   printf("\n");
}
int Partition(int A[],int low,int high)
{       int pivot=A[low];
        int i=low+1;
        int j=high;   
        int temp;
   do{
        while(A[i]<=pivot)
        {
           i++;
        }
        while(A[j]>pivot)
        {
           j--;
        }
         if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
          }while(i<j);

          // Swap A[low] and A[j]
        temp=A[low];
        A[low]=A[j];
        A[j]=temp; 
        return j;  
}
void Quick_Sort(int A[],int l,int h)
{    if(l<h)
     {   int partitionindex=Partition(A,l,h);
         // PrintArray(A,n);
         Quick_Sort(A,l,partitionindex-1);
         Quick_Sort(A,partitionindex+1,h);
     }
}
int main()
{   int n;
    printf("\nEnter the no. of elements you want in the array:");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the elements to be sorted:");
    for(int i=0;i<n;i++)
      { 
        scanf("%d",&A[i]);
       }
    printf("\nArray elements before sorting:");   
    PrintArray(A,n);
    Quick_Sort(A,0,n-1);
    printf("\nArray elements after sorting:");
    PrintArray(A,n);   
    
}