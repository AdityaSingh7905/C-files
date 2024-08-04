#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int Emp_id;
    char Emp_name[25];
    char Emp_city[25];
};
void Create(struct employee e[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of %d employee : \n", i + 1);
        printf("ID of employee :\n");
        scanf("%d", &e[i].Emp_id);
        getchar();
        printf("Name of employee :\n");
        gets(e[i].Emp_name);
        printf("City of employee :\n");
        gets(e[i].Emp_city);
    }
    printf("\n \nDetails of the employees are : \n \n \n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d : \n", i + 1);
        printf("ID : %d\n", e[i].Emp_id);
        printf("Name: ");
        puts(e[i].Emp_name);
        printf("City: ");
        puts(e[i].Emp_city);
    }
}
void Record(struct employee e[],int n,int a)
{  for(int i=0;i<n;i++)
    {  if(a==e[i].Emp_id)
        printf("\n%d\t %s\t %s",e[i].Emp_id,e[i].Emp_name,e[i].Emp_city);
      }
}

void Count(int m)
{  
     printf("\nTotal number of employees in the database: %d",m);
  }
void Add(struct employee e[],int m,struct employee f[]) 
{   for(int i=0;i<m;i++)
     {
        f[i+5]=e[i];
     }
     printf("\n");
     Create(f,5);
    /* for(int i=m-5;i<m;i++)
     {
       scanf("\n%d %s %s",&f[i].Emp_id,&f[i].Emp_name,&f[i].Emp_city);
     } */
    printf("\nDatabase for required employees are as follows: ");
    for(int i=0;i<m+5;i++)
    {
      printf("\n%d %s %s",f[i].Emp_id,f[i].Emp_name,f[i].Emp_city );
    }
     
} 
int main()
{
    int n,b;
    printf("\nEnter the number of employees data you want to be entered:");
    scanf("%d",&n);
    struct employee e[n];
    struct employee f[n+5];
    printf("\nEnter data of employees :");
    Create(e,n);
    printf("\nEnter the employee id whom details you want to check:");
    scanf("%d",&b);
    Record(e,n,b);
    Count(n);
    Add(e,n,f);
   
}