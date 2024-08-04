#include<stdio.h>
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int arr[],int n)
{
    int temp;
    int Sorted=0;
    for(int i=0;i<n-1;i++)
    {   printf("Working on %d pass\n",i+1);
        Sorted=1;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                Sorted=0;
            }
        }
        if(Sorted==1)
          return;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    PrintArray(arr,n); // Array Elements before sorting
    BubbleSort(arr,n);
    PrintArray(arr,n);// Array Elements after sorting
}