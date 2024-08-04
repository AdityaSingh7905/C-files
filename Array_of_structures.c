#include<stdio.h>
struct book
{
    char name[10];
    float price;
    int pages;
};
int main()
{
    struct book b[3];
    for(int i=0;i<3;i++)
    {
        printf("\nEnter name, price and pages:");
        scanf("%s %f %d",&b[i].name,&b[i].price,&b[i].pages);
    }
   
    for(int i=0;i<3;i++)
    {
        printf("\n%s %f %d",b[i].name,b[i].price,b[i].pages);
    }
}