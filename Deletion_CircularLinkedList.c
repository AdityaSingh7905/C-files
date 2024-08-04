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
    struct node *q=head;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p->next;
    head=p->next;
    free(p);
    return head;
}
struct node * DeleteInbetween(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node * Delete_node(struct node *head,int data)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=data&&q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==data)
    {
        p->next=q->next;
        free(q);
    }
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
    printf("\nLinked list before deletion:");
    traversal(head);
    //head=DeleteAtfirst(head);
    //head=DeleteInbetween(head,3);
    head=Delete_node(head,13);
    head=Delete_node(head,15);
    head=Delete_node(head,17);
    head=Delete_node(head,19);
    printf("\nLinked list after deletion:");
    traversal(head);
}