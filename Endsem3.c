#include<stdio.h>   // header file for using its functions
int main(void)
{
    int arr[3][3][3];     
    int n=27;
    int arr1[n];
    int I=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
           { printf("Enter the values of arr[%d][%d][%d]\n",i,j,k);
            scanf("%d",&arr[i][j][k]);
            arr1[I++]=arr[i][j][k];
           }
        }
    }
    // for sorting we created a new 1D array and sorted it and again put the values into the 3D array
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
               int  t=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
            }
        }
    }
    I=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                arr[i][j][k]=arr1[I++];
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("MINIMUM VALUE: %d\n MAXIMUM VALUE:%d",arr[0][0][0],arr[3][3][3]);
}