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
struct Node * Insert_at_beginning(struct Node *ptr,int num)
{
       struct Node *p=malloc(sizeof(struct Node));
       p->data=num;
       p->next=ptr;
       ptr=p;
       return ptr;
}
struct Node * Insert_in_between(struct Node *head,int num,int index)
{
    struct Node *p=malloc(sizeof(struct Node));
    int i=0;
    struct Node *ptr=head;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    p->data=num;
    p->next=ptr->next;
    ptr->next=p;
    return head;
}
struct Node * Insert_at_end(struct Node *head,int num)
{
    struct Node *p=malloc(sizeof(struct Node));
    p->data=num;
    struct Node *ptr=head;
    while(ptr->next!=NULL)
      ptr=ptr->next;
   
    p->next=NULL;
    ptr->next=p;
    return head;
}
struct Node * Deletion_at_beginning(struct Node *ptr)
{
    struct Node *p=ptr;
    ptr=ptr->next;
    free(p);
    return ptr;
}
struct Node * Deletion_between(struct Node *p,int num)
{   struct Node *ptr=p;
    int i=0;
    while(i!=num-1)
    {
        ptr=ptr->next;
        i++;
    }
    struct Node *q=ptr->next;
    ptr->next=q->next;
    free(q);
    return p;
}
struct Node * Deletion_at_end(struct Node *ptr)
{   struct Node *p=ptr;
    while(p->next!=NULL)
      p=p->next;
    struct Node *q=ptr;
    while(q->next!=p)
      q=q->next;
    q->next=p->next;
    free(p);
    return ptr;    

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
    printf("linked list before insertion/deletion:\n");
    linkedlistTraversal(head);
    //head=Insert_at_beginning(head,5);
    //head=Insert_in_between(head,17,2);
    //head=Insert_at_end(head,69);
    //head=Deletion_at_beginning(head);
    //head=Deletion_between(head,1);
    head=Deletion_at_end(head);
    printf("\nLinked list after insertion/deletion:\n");
    linkedlistTraversal(head);
}