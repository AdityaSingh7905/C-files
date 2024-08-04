#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node * createnode(int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=NULL;
    return ptr;
}
void link_nodes(struct node *p[],int num)
{    int i=0;
     while(i<num-1)
     { 
          p[i]->next=p[i+1];
          p[i+1]->prev=p[i];
          i++;
     }
    
}
void Traversal(struct node *p)
{   
    while(p->next!=NULL)
    {
        printf("\nElement is: %d\n",p->data);
        p=p->next;
    }  
    printf("\nElement is: %d",p->data);

}
int main()
{
    int n;
    printf("\nEnter the number of nodes u want to create:");
    scanf("%d",&n);
    struct node *ptr[n];
    for(int i=0;i<n;i++)
    {
        int data;
        printf("\nEnter the data in the linked list:");
        scanf("%d",&data);
        ptr[i]=createnode(data);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nElement is: %d",ptr[i]->data);
    }
    // for linkinf of all the nodes
    link_nodes(ptr,n);
    Traversal(ptr);
}