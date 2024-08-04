#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *top)
{
    if(top==NULL)
      return 1;
    else
      return 0;  
}
int isFull(struct node *top)
{   struct node *p=malloc(sizeof(struct node));
    if(p==NULL)
      return 1;
    else
      return 0;  
}
struct node * push(struct node *top,int data)
{
    if(isFull(top))
      printf("\nStack Overflow! Can't push anything.");
    else
    {
        struct node *p=malloc(sizeof(struct node));
        p->data=data;
        p->next=top;
        top=p;
        return top;
    }  
}
struct node * pop(struct node *top)
{
    if(isEmpty(top))
      printf("\nStack Underflow!!");
    else
    {
        struct node *p=top;
        int x=top->data;
        printf("\nPopped element is: %d",x);
        top=top->next;
        free(p);
        return top;
    }  
}
int Top(struct node *top)
{
    if(isEmpty(top))
      printf("\nStack Underflow!!");
    else
    {
        return top->data;
    }  
}
int Size(struct node *top)
{   int c=0;
    if(isEmpty(top))
      printf("\nStack is Empty!!");
    else
    {   
        while(top!=NULL)
        {
            c++;
            top=top->next;
        }
    }  
    return c;
}
void linkedlistTraversal(struct node *top)
{
    while(top!=NULL)
    {
        printf("\nElement is: %d",top->data);
        top=top->next;
    }
}
int main()
{
   struct node *top=NULL;
   top=push(top,11);
   top=push(top,12);
   top=push(top,13);
   linkedlistTraversal(top);
   top=pop(top);
   linkedlistTraversal(top);
   printf("\nTopest element is: %d",Top(top));
   printf("\nNo.of elements in the stack is: %d",Size(top));
}