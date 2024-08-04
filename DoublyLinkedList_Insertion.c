#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node * insertAtfirst(struct node *ptr,int data)
{
    struct node *p=malloc(sizeof(struct node));
    p->data=data;
    p->prev=NULL;
    p->next=ptr;
    ptr=p;
    return ptr;
}
struct node * insertAtbetween(struct node * head,int data,int position)
{
    struct node *p=head;
    struct node *q=head->next;
    struct node *ptr=malloc(sizeof(struct node));
    int i=1;
    while(i<position-1)
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
struct node * insertAfternode(struct node *head,struct node *prevNode,int data)
{   struct node *p=prevNode->next;
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    ptr->prev=p->prev;
    p->prev=ptr;
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
    struct node *second=malloc(sizeof(struct node));
    struct node *third=malloc(sizeof(struct node));
    struct node *fourth=malloc(sizeof(struct node));
    //linking of all the nodes
    head->prev=NULL;
    head->next=second;
    head->data=7;
    second->prev=head;
    second->next=third;
    second->data=11;
    third->prev=second;
    third->data=13;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=NULL;
    fourth->data=17;
    printf("\nLinked list before insertion:");
    doublylinkedlistTraversal(head);
    /*for(int i=10;i<15;i++)
    {
      head = insertAtfirst(head,12+i);
    } */
    /*int index;
    printf("\nEnter the index you want insert:");
    scanf("%d",&index);
    head=insertAtbetween(head,19,index); */
    //head=insertAtend(head,19);
    head=insertAfternode(head,third,15);
    printf("\nLinked list after insertion:");
    doublylinkedlistTraversal(head);


}