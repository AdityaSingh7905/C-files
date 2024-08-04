#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node * insertAtfirst(struct node *head,int data)
{
    struct node *p=malloc(sizeof(struct node));
    struct node *q=head;
    while(q->next!=head)
    {
        q=q->next;
    } 
    p->data=data;
    p->next=q->next;
    q->next=p;
    //head=p;
    return head;
} 
struct node * insertAtbetween(struct node *head,int data,int index)
{
    struct node *ptr=malloc(sizeof(struct node));
    struct node *p=head;
    int i=1;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
void traversal(struct node *head)
{
    struct node *p=head;
    do
    {
        printf("\nElement is:%d",p->data);
        p=p->next;
    }while(p!=head);
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    struct node *second=malloc(sizeof(struct node));
    struct node *third=malloc(sizeof(struct node));
    struct node *fourth=malloc(sizeof(struct node));
    struct node *fifth=malloc(sizeof(struct node));
    //linking of all the nodes
    head->data=11;
    head->next=second;
    second->data=13;
    second->next=third;
    third->data=15;
    third->next=fourth;
    fourth->data=17;
    fourth->next=fifth;
    fifth->data=19;
    fifth->next=head;
    printf("\nLinked list before insertion:");
    traversal(head);
    head=insertAtfirst(head,21);
    //head=insertAtfirst(head,22);
    //head=insertAtfirst(head,23);
    //head=insertAtbetween(head,14,3);
    printf("\nLinked list after insertion:");
    traversal(head);
}