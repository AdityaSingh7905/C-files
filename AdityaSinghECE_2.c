#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter data in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {   int a=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]&&arr[i]>0&&arr[j]>0)
             {  a++;
                arr[j]=-1;
               }
             
        }
        if(arr[i]>0)
          printf("\n %d appears %d times in the given array.",arr[i],a);
    }
}