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
struct Node * InsertAfterNode(struct Node *head,struct Node *prevNode,int data)
{
    struct Node *p=malloc(sizeof(struct Node));
    p->data=data;
    p->next=prevNode->next;
    prevNode->next=p;
    return head;
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
    /*struct Node *second=malloc(sizeof(struct Node));
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
    fourth->next=NULL;  */
    printf("linked list before insertion:\n");
    linkedlistTraversal(head);
    head=Insert_at_beginning(head,5);
    //head=Insert_in_between(head,17,2);
    //head=Insert_at_end(head,69);
    //head=InsertAfterNode(head,third,45);
    printf("\nLinked list after insertion:\n");
    linkedlistTraversal(head);
}