#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct queue
{
    struct stack *s1;
    struct stack *s2;
};
void Push(struct stack **top,int data)
{  struct stack *ptr=malloc(sizeof(struct stack));
   if(ptr==NULL)
     printf("\nStack Overflow.Cannot push %d into the stack.",data);
    ptr->data=data;
    ptr->next=(*top);
    (*top)=ptr;
    
}

void enQueue(struct queue *q,int data)
{
    Push(&q->s1,data);
}
int Pop(struct stack **top)
{    
    struct stack *tp=(*top);
    if((*top)==NULL)
     printf("\nStack Underflow.Cannot pop from the stack.");
    else
    {
       int val=(*top)->data;
       (*top)=(*top)->next;
       free(tp);
       return val;
    }
}
int deQueue(struct queue *q)
{   if(q->s1==NULL& q->s2==NULL)
       printf("\nQueue is Empty");
    if(q->s2==NULL)   
    {  while(q->s1!=NULL)
      {
         int val=Pop(&q->s1);
         Push(&q->s2,val);
      }
    }
    int val=Pop(&q->s2);
    return val;
}
int main()
{
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
	q->s1 = NULL;
	q->s2 = NULL;
	enQueue(q, 11);
	enQueue(q, 21);
	enQueue(q, 31);
    enQueue(q, 41);
    printf("\nPrinting the elements present in the queue:");
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
    printf("%d ", deQueue(q));
  
}