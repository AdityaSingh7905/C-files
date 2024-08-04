#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node * Circular_InsertionAtBeginning(struct Node *head,int data)
{ //struct Node *ptr=head;
  struct Node *p=head;
  struct Node *q=malloc(sizeof(struct Node));
  while(p->next!=head)
    p=p->next;
  q->data=data;  
  p->next=q;
  q->next=head;
  head=q;
  return head;
}
struct Node * Circular_Insertion_between(struct Node *head,int data,int index)
{
    struct Node *p=head;
    struct Node *q=malloc(sizeof(struct Node));
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    q->data=data;
    q->next=p->next;
    p->next=q;
    return head;
}
struct Node * Circular_InsertionAfterNode(struct Node *head,struct Node *prevNode,int data)
{
    struct Node *p=malloc(sizeof(struct Node));
    p->data=data;
    p->next=prevNode->next;
    prevNode->next=p;
    return head;
}
void CircularlinkedlistTraversal(struct Node *ptr)
{  struct Node *p=ptr;
   while(p->next!=ptr)
   {
      printf("Element is: %d\n",p->data);
      p=p->next;
   }
   printf("Element is: %d\n",p->data);
   //do
   //{  printf("Element is: %d\n",p->data);
   //   p=p->next;
   //}while(p!=ptr);
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
    fourth->next=head;
    printf("linked list before insertion:\n");
    CircularlinkedlistTraversal(head);
    //head=Circular_InsertionAtBeginning(head,5);
    head=Circular_Insertion_between(head,17,1);
    //head=Insert_at_end(head,69);
    //head=Circular_InsertionAfterNode(head,head,45);
    printf("\nLinked list after insertion:\n");
    CircularlinkedlistTraversal(head);
}