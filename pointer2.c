#include<stdio.h>
int main(void)
{   int arr[5]={10,20,30,40,50},sum=0;
    int *p=arr;
    sum=sum+*p;
    for(int i=0;i<4;i++)
       p++;
    sum=sum+ *p;
    printf("Sum of first and last element:%d \n",sum);


}