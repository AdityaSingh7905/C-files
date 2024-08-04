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
    struct Node *temp;
    dest->data=data;
    dest->next=NULL;
    temp=head;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=dest;
    return head;  
}
struct Node * Reverse_linkedlist(struct Node *head)
{   
     struct Node *p=NULL;
     struct Node *q=head;
     while(q!=NULL)
     {  
        struct Node *temp=q->next;
        q->next=p;
        p=q;
        q=temp;
     }
     return p;
}
void linkedlistTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
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
    printf("linked list before reversing:\n");
    linkedlistTraversal(head);
    head=Reverse_linkedlist(head);
    printf("\nLinked list after reversing:\n");
    linkedlistTraversal(head);
}