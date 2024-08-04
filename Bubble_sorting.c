#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers to be bubble sorted:");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {  for(int j=0;j<n-1;j++)
       {    int temp;
            if(arr[j]>arr[j+1])
            {  temp=arr[j];
               arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
         }
    }
    printf("\nSorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }    
}