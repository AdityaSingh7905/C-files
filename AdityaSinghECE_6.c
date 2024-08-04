#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char title[25];
    char author[25];
    int pages;
    int price;
    int sold;   // no. of sold copies
    int amount; // total amount of sold copies
};
/*void scan(struct book b[],int n)
{
  for(int i=0;i<n;i++)
  {
      printf("\nEnter the title of the book:");
      gets(b[i].title);
      printf("\nEnter the author of the book:");
      gets(b[i].author);
      printf("\nEnter the no. of pages of the book:");
      scanf("%d",&b[i].pages);
      printf("\nEnter the price of the book:");
      scanf("%d",&b[i].price);
      printf("\nEnter the no. of sold copies of the book:");
      scanf("%d",&b[i].sold);
      printf("\nEnter the total amount of sold copies:");
      scanf("%d",&b[i].title);
      
  }

}*/
void scan(struct book b[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Book %d :\n", i + 1);
        printf("Enter the title of the book\n");
        getchar();
        gets(b[i].title);
        printf("Enter the author of the book\n");
        gets(b[i].author);
        printf("Enter the pages in the book\n");
        scanf("%d", &b[i].pages);
        
        printf("Enter the price of the book\n");
        scanf("%d", &b[i].price);
        
        printf("Enter the number of sold copies of the book\n");
        scanf("%d", &b[i].sold);
        b[i].amount = 0;
    }
    
}
void print(struct book b[],int n)
{
     /* for(int i=0;i<n;i++)
    {
     printf("\nTitle= %s Author= %s Pages= %d",b[i].title,b[i].author,b[i].pages);
     printf("\nPrice= %d No. of sold copies= %d Total amount of sold copies= %d",b[i].price,b[i].sold,b[i].amount);
    }*/
    for (int i = 0; i < n; i++)
    {
        printf("\n\nBook %d :\n", i + 1);
        printf("Title of book is : %s\n", b[i].title);
        printf("Author of book is : %s\n", b[i].author);
        printf("Number of pages in book : %d\n", b[i].pages);
        printf("Price of the book : %d\n", b[i].price);
        printf("Number of sold copies of the book : %d\n", b[i].sold);
        b[i].amount=(b[i].price * b[i].sold);
        printf("Total amount of money earned by selling the book : %d\n", b[i].amount);
    }
}
void Max(struct book b[],int n)
{  int max;
   for(int i=0;i<1;i++)
   {   max=b[i].pages;
      for(int j=i+1;j<n;j++)
      {  if( max<b[j].pages)
            max=b[j].pages;
        
      }
   }
   for(int i=0;i<n;i++)
   {
     if(max==b[i].pages)
     {
        printf("\nTitle= %s Author= %s Pages= %d",b[i].title,b[i].author,b[i].pages);
        printf("\nPrice= %d No. of sold copies= %d Total amount of sold copies= %d",b[i].price,b[i].sold,b[i].amount);
     }
   }
    
  }
void Min(struct book b[],int n)
{  int min=b[0].price;
   for(int i=1;i<n;i++)
   {
     if(min>b[i].price)
       min=b[i].price;
   }
   for(int i=0;i<n;i++)
   {
     if(min==b[i].price)
     {
        printf("\nTitle= %s Author= %s Pages= %d",b[i].title,b[i].author,b[i].pages);
        printf("\nPrice= %d No. of sold copies= %d Total amount of sold copies= %d",b[i].price,b[i].sold,b[i].amount);
     }
   }
} 
void TotalAmount(struct book b[],int n)
{   int sum=0;
    for(int i=0;i<n;i++)
     sum+=b[i].amount;
     printf("\nTotal amount after selling required books: %d",sum);
} 
int main()
{
   int n;
   printf("\nEnter the no. of books information you want to store: ");
   scanf("%d",&n);
   struct book b[n]; // array of structures
   printf("\nEnter information related to books inside the structure:");
   scan(b,n);
   print(b,n);
   Max(b,n);
   Min(b,n);
   TotalAmount (b,n);
}