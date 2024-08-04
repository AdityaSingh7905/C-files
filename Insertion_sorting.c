#include<stdio.h>
int main()
{
    int n,key;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n;j++)
    {   key=arr[j];
        int i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    printf("\nSorted array:");
    for(int i=0;i<n;i++)
       printf("%d\t",arr[i]);
}