#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
int isEmpty(struct node *front)
{
    if(front==NULL)
      return 1;
    else
      return 0;  
}
int isFull(struct node *rear)
{  
    if(rear==NULL)
      return 1;
    else
      return 0;  
}
void EnQueue(int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    if(isFull(ptr))
      printf("\nQueue Overflow!Can't insert anything..");
    else
    {
        ptr->data=data;
        ptr->next=NULL;
        if(front==NULL)
          front=rear=ptr;
        else
        {
            rear->next=ptr;
            rear=ptr;
        }  
    }  
}
int DeQueue()
{
    int val=-1;
    struct node *ptr;
    if(isEmpty(front))
      printf("\nQueue is Empty!!");
    else
    {  
       ptr=front;
       front=front->next;
       val=ptr->data;
       free(ptr);
    }  
    return val;
}
void linkedlistTraversal(struct node *front)
{   printf("\nPrinting elements of this linkedlist:");
    while(front!=NULL)
    {
        printf("\nElement is: %d",front->data);
        front=front->next;
    }
}
int main()
{
    
    EnQueue(11);
    EnQueue(21);
    EnQueue(31);
    EnQueue(41);
    EnQueue(51);
    linkedlistTraversal(front);
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    linkedlistTraversal(front);
    DeQueue();
    DeQueue();
    
}