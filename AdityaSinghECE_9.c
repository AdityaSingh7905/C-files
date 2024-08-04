#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n],mod[n];
    printf("\nEnter data in the given array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mod[i]=-1;
    }
    printf("\nOriginal array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
              arr[j]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
         mod[i]=arr[i];
    }
    printf("\nModified array:");
    for(int i=0;i<n;i++)
    {   if(mod[i]>0)
         printf("%d\t",mod[i]);
    }
}