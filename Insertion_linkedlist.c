#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_traversal(struct Node *ptr)
{   while(ptr!=NULL)
   { printf("Element: %d\n",ptr->data);
     ptr=ptr->next;
   }
}
// Case 1:
struct Node * insert_first(struct Node *head, int data)
{   struct Node *ptr= malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
// Case 2:
struct Node * insert_index(struct Node *head,int data,int index)
{   struct Node *ptr= malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
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
// Case 3:
struct Node * insert_end(struct Node *head,int data)
{
    struct Node *ptr=malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=NULL)
      p=p->next;
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
} 
// Case 4:
struct Node * insert_after_Node(struct Node *head,struct Node *prevNode,int data)
{    struct Node *ptr=malloc(sizeof(struct Node));
     ptr->data=data;
     ptr->next=prevNode->next;
     prevNode->next=ptr;
     return head;

}
int main()
{
    struct Node *head= malloc(sizeof(struct Node));
    struct Node *second= malloc(sizeof(struct Node));
    struct Node *third= malloc(sizeof(struct Node));
    struct Node *fourth= malloc(sizeof(struct Node));
    // linking head and second
    head->data=7;
    head->next=second;
    // linking second and third
    second->data=11;
    second->next=third;
    // linking third and fourth
    third->data=46;
    third->next=fourth;
    // terminating the linked list
    fourth->data=66;
    fourth->next=NULL;
    // calling the function
    printf("Linked list before the insertion:\n"); 
    linkedlist_traversal(head);
   // head=insert_first(head,56);
   // linkedlist_traversal(head);
    //head=insert_index(head,23,2);
    //linkedlist_traversal(head);
    //head=insert_end(head,78);
   // linkedlist_traversal(head);
    head=insert_after_Node(head,third,87);
    printf("Linked list after the insertion:\n"); 
    linkedlist_traversal(head);
}