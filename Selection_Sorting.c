// Selection Sorting
#include<stdio.h>
int main()
{
    int n,p,min=0;
    printf("\nEnter the number of elements you want in your array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements in the array:");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {   int temp;
        min=arr[i];
        p=i;
        for(int j=i+1;j<n;j++)
        {  if(min>arr[j])  // linear searching for finding smallest element in the given array
            {  min=arr[j];
               p=j;  // noting down its position number
            }
           
        }
        temp=arr[i];   // swaping the smallest element with the element at first position and so on..
        arr[i]=arr[p];
        arr[p]=temp;
    }
    printf("\nSorted array:");
    for(int i=0;i<n;i++)
       printf("%d\t",arr[i]);
}