#include<stdio.h>
int main()
{
    int arr[3][4][2]={ {{2,4},{7,8},{3,4},{5,6}},{{7,6},{3,4},{5,3},{2,3}},{{8,8},{7,2},{3,4},{5,1}}};
    // s or s[0] denotes the address of the zeroth two dimensional array
    // s+1 or s[1] denotes the address of the firsth two dimensional array and so on
    // *s denotes the address of the first row of the zeroth two dimensional array
    // **s denotes the address of the first element of the first row of the zeroth two dimensional array
    // ***s represents value at the address of the first element of the first row of the zeroth two dimensional array
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<4;j++)
        {
            printf("\n");
            for(int k=0;k<2;k++)
            {
                printf("%d \t",*(*(*(arr+i)+j)+k));
            }
        }
    }
}