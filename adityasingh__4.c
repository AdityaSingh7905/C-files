#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node * createnode(struct Node *head,int data)
{
    struct Node *dest=malloc(sizeof(struct Node));
    struct Node *temp=head;
    dest->data=data;
    dest->next=NULL;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=dest;
    return head;  
}
struct Node * create_Circularlinkedlist(struct Node *head)
{
    struct Node *temp=head;
    while(temp->next!=NULL)
       temp=temp->next;
    temp->next=head;
    return head;   
}
void linkedlistTraversal(struct Node *ptr)
{   struct Node *p=ptr;
    do
    {
        printf("Element is: %d\n",p->data);
        p=p->next;
    }while(p!=ptr);
}
int main()
{
    struct Node *head=malloc(sizeof(struct Node));
    printf("\nEnter the data to be stored in head:");
    scanf("%d",&(head->data));
    head->next=NULL;
    int n,data;
    printf("\nEnter the number of nodes you want to create:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the value of data:");
        scanf("%d",&data);
        head=createnode(head,data);
    }
    //for linking last node to head node
    head=create_Circularlinkedlist(head);
    printf("Circular linked list is as follows:\n");
    linkedlistTraversal(head);
}