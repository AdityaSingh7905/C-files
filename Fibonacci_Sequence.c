#include<stdio.h>
int main()
{
    int arr[25];
    arr[0]=1;
    arr[1]=1;
    printf("%d\t%d\t",arr[0],arr[1]);
    for(int i=0;i<24;i++)
    {
        arr[i+2]=arr[i]+arr[i+1];
        printf("%d\t",arr[i+2]);
    }
}