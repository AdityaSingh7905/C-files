#include<stdio.h>
#include<stdlib.h>
#define max 10
struct queue
{
    int arr[max];
    int data;
    int front;
    int rear;
};
struct stack
{
    struct queue *q1;
    struct queue *q2;
};
void enqueue(struct queue **q,int data)
{   
    (*q)->rear++;
    (*q)->arr[(*q)->rear]=data;
}
int dequeue(struct queue **q)
{   int a=-1;
    if(*q==NULL)
      printf("\nQueue is empty!Can't dequeue anything..");
    (*q)->front++;
    a=(*q)->arr[(*q)->front];
    return a;
    
}
void push(struct stack *s,int data)
{
    //firstly all elements of the queue q1 into q2
    while(&s->q1!=NULL)
    {
          enqueue(&s->q2,dequeue(&s->q1));
    }
    //Push data in the empty queue q1
    enqueue(&s->q1,data);
    while(&s->q2!=NULL)
    {
         enqueue(&s->q1,dequeue(&s->q2));
    }
}
int pop(struct stack *s)
{ 
    if(&s->q1==NULL)
      printf("\nStack is empty!Can't pop anything!!");
    else
       return dequeue(&s->q1);  
       
}

int main()
{
    struct stack  *s =(struct stack *)malloc(sizeof(struct stack));
    s->q1->front=-1;
    s->q1->rear=-1;
    s->q2->front=-1;
    s->q2->rear=-1;
    push(s, 11);
	push(s, 21);
	push(s, 31);
    push(s, 41);
    printf("\nPrinting the elements present in the stack:");
	printf("%d ", pop(s));
	printf("%d ", pop(s));
	printf("%d ", pop(s));
    //printf("%d ", pop(s));

}