#include<stdio.h>
int main()
{
    int n,a;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements in the array:");
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    printf("\nEnter the element you want to search in the array:");
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(a==arr[i])
          printf("Searched element is present in given array.");
      
    }  
}