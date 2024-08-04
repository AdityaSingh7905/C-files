#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   char names[30][30];
    char phone[30][15];
    char b[30][30];
    int n;
    printf("\nEnter the no. of customers details you want to store(<=30):");
    scanf("%d",&n);
    int l[n];
    printf("\nEnter names and phone number of the customers:");
    for(int i=0;i<n;i++)
    {  getchar();
       gets(names[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%s",&phone[i][0]);
    }
    printf("\nWhat you have entered is as follows:");
    for(int i=0;i<n;i++)
    {
         printf("\nCustomers full name=  %s",names[i]);
         printf("\tPhone no.= %s",phone[i]);
    }
    for(int i=0;i<n;i++)
    { 
        l[i]=strlen(names[i]);
    }
    printf("\nLength of all names is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",l[i]);
    }
    for(int i=0;i<n;i++)
    {  int k=0;
        for(int j=0;j<l[i];j++)
        {
            if(names[i][j]!=' ')
              {  
                  b[i][k]=names[i][j];
                  k++;
                  
              }
              if(names[i][j]==' ')
              {
                   b[i][k]=',';
                   k++;
                   b[i][k]=names[i][j+1];
                   k++;
                   b[i][k]='.';
                   k++;
                   break;
              }
        }
        for(int j=l[i]-1;j>=0;j--)
        {   if( names[i][j]==' ')
             {   b[i][k]=names[i][j+1];
                 break;
             }

        }
    }
    printf("\nCustomer list:");
    for(int i=0;i<n;i++)
    {
        printf("\n%s %s ",b[i],phone[i]);
    }
    

}