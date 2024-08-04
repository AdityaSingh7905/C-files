#include<stdio.h>
int main()
{
    int arr[10],p=0,n=0,e=0,o=0;
    printf("Enter the numbers to be checked:");
    for(int i=0;i<10;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<=9;i++)
    {
        if(arr[i]>0&&arr[i]%2==0)
        {   p++;
            e++;
           }
        else if(arr[i]>0&&arr[i]%2!=0)
        {   p++;
            o++;
          }
        else if(arr[i]<0&&arr[i]%2==0)
        {   n++;
            e++;
        }
        else
        {   n++;
            o++;

        }     
    }
   
    printf("No. of numbers positive are: %d and negative are: %d",p,n);
    printf("Even numbers are :%d and odd numbers are :%d",e,o);
    
}