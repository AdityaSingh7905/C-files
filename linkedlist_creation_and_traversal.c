#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
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
    struct Node *second=malloc(sizeof(struct Node));
    struct Node *third=malloc(sizeof(struct Node));
    struct Node *fourth=malloc(sizeof(struct Node));
    //linking of the first and second Nodes
    head->data=7;
    head->next=second;
    //linking of the second and third Nodes
    second->data=11;
    second->next=third;
    //linking of the third and fourth Nodes
    third->data=41;
    third->next=fourth;
    //terminating the linked list
    fourth->data=66;
    fourth->next=NULL;
    linkedlistTraversal(head);
}