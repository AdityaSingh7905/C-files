#include<stdio.h>
void BinarySearch(int arr[],int size,int element)
{
    int low,mid,high,index;
    low=0;
    high=size-1;
    int f=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            f=1;
            index=mid;
            break;
        }
        else if(arr[mid]<element)
               low=mid+1;
             else
               high=mid-1;
              
    }
    if(f==1)
    {
        printf("Element %d is present at index %d",element,index);
    }
    else
    {
        printf("Element %d is not present in this array..");
    }
}
int main()
{   int n,num;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Emter the number you want to serach:");
    scanf("%d",&num);
    BinarySearch(arr,n,num);

}