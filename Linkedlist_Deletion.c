#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("\nElement is: %d",ptr->data);
        ptr=ptr->next;
    }
}
struct node * Deletion_at_beginning(struct node *ptr)
{
    struct node *p=ptr;
    ptr=ptr->next;
    free(p);
    return ptr;
}
struct node * Deletion_between(struct node *p,int num)
{   struct node *ptr=p;
    int i=0;
    while(i!=num-1)
    {
        ptr=ptr->next;
        i++;
    }
    struct node *q=ptr->next;
    ptr->next=q->next;
    free(q);
    return p;
}
struct node * Deletion_at_end(struct node *ptr)
{   struct node *p=ptr;
    while(p->next!=NULL)
      p=p->next;
    struct node *q=ptr;
    while(q->next!=p)
      q=q->next;
    q->next=p->next;
    free(p);
    return ptr;    

}
struct node * Deletion_at_value(struct node *ptr,int data)
{
    struct node *p=ptr;
    struct node *q=ptr->next;
    while(q->data!=data && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==data)
    {  p->next=q->next;
       free(q);
    }
    return ptr;    
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    struct node *second=malloc(sizeof(struct node));
    struct node *third=malloc(sizeof(struct node));
    struct node *fourth=malloc(sizeof(struct node));
    struct node *fifth=malloc(sizeof(struct node));
    //linking of the first and second nodes
    head->data=7;
    head->next=second;
    //linking of the second and third nodes
    second->data=11;
    second->next=third;
    //linking of the third and fourth nodes
    third->data=23;
    third->next=fourth;
    //linking of the fourth and fifth nodes
    fourth->data=37;
    fourth->next=fifth;
    //terminating the linked list
    fifth->data=48;
    fifth->next=NULL;
    printf("\nLinked List Before deletion:");
    linkedlistTraversal(head);
    //head=Deletion_at_beginning(head);
    //head=Deletion_between(head,1);
    //head=Deletion_at_end(head);
    head=Deletion_at_value(head,48);
    printf("\nLinked List After deletion:");
    linkedlistTraversal(head);

}