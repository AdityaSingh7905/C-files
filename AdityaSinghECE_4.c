#include<stdio.h>
void reverse(int arr[],int n)
{
    int *ptr1,*ptr2;
    for(int i=0;i<n/2;i++)
   {   int temp;
        ptr1=&arr[i];
        ptr2=&arr[n-1-i];
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }
}
int main()
{
    int n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter data in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    reverse(arr,n);
    printf("\nReversed array is:");
    for(int i=0;i<n;i++)
    {   printf("%d\t",arr[i]);
     } 
   

}