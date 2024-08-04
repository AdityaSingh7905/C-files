#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node * createnode(struct node *head,int data)
{
    struct node *dest=malloc(sizeof(struct node));
    struct node *temp;
    dest->data=data;
    dest->prev=NULL;
    dest->next=NULL;
    temp=head;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=dest;
    dest->prev=temp;
    return head;  
}
struct node * insertAtfirst(struct node *ptr,int data)
{
    struct node *p=malloc(sizeof(struct node));
    p->data=data;
    p->prev=NULL;
    p->next=ptr;
    ptr=p;
    return ptr;
}
struct node * insertAtbetween(struct node * head,int data,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    struct node *ptr=malloc(sizeof(struct node));
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=q->prev;
    q->prev=ptr;
    return head;
}
struct node * insertAtend(struct node *head,int data)
{
    struct node *p=head;
    struct node *ptr=malloc(sizeof(struct node));
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->prev=p;
    ptr->next=NULL;
    return head;
}
struct node * DeleteAtfirst(struct node *head)
{
    struct node *p=head;
    head=head->next;
    head->prev=NULL;
    free(p); 
    return head;
}
struct node * DeleteInbetween(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    struct node *r=head->next->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        r=r->next;
        i++;
    }
    p->next=q->next;
    r->prev=q->prev;
    free(q);
    return head;
}
struct node * DeleteAtend(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}
void doublylinkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    printf("\nEnter the data to be stored in head:");
    scanf("%d",&(head->data));
    head->next=NULL;
    head->prev=NULL;
    int n,data;
    printf("\nEnter the number of nodes you want to create:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the value of data:");
        scanf("%d",&data);
        head=createnode(head,data);
    }
    printf("\nLinked list before insertion/deletion:\n");
    doublylinkedlistTraversal(head);
    //head=insertAtfirst(head,15);
    head=insertAtbetween(head,15,2);
    //head=insertAtend(head,15);
    //head=DeleteAtfirst(head);
    //head=DeleteInbetween(head,2);
    //head=DeleteAtend(head);
    printf("\nLinked list after insertion/deletion:\n");
    doublylinkedlistTraversal(head);


}