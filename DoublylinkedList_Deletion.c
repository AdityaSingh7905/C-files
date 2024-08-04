#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
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
struct node * Delete_node(struct node *head,int data)
{
    struct node *p=head;
    struct node *q=head->next;
    struct node *r=head->next->next;
    while(q->data!=data&&q->next!=NULL)
    {
        p=p->next;
        q=q->next;
        r=r->next;
    }
    if(q->data==data)
    {
        p->next=q->next;
        r->prev=q->prev;
        free(q);
    }
    return head;
}
void traversal(struct node *head)
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("\nElement is:%d",p->data);
        p=p->next;
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
    printf("\nLinked list before deletion:");
    traversal(head);
    //head=DeleteAtfirst(head);
    //head=DeleteInbetween(head,2);
    //head=DeleteAtend(head);
    //head=DeleteAtend(head);
    head=Delete_node(head,11);
    printf("\nLinked list after deletion:");
    traversal(head);
}