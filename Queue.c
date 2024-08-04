#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int* arr;
};
int isfull(struct Queue *q)
{   if(q->rear==q->size-1)
      return 1;
    else
      return 0;  
}
int isempty(struct Queue *q)
{
    if(q->front==q->rear)
      return 1;
    else
      return 0;  
}
void enqueue(struct Queue *q,int n)
{
    if(isfull(q))
      printf("\nThe queue is full.");
    else
    {    printf("\nEnqueued element is: %d",n);
        q->rear++;
        q->arr[q->rear]=n;
       
    }  
}
int dequeue(struct Queue *q)
{  int a=-1;
    if(isempty(q))
      printf("\nNo element to dequeue.");
    else
    {
        q->front++;
        a=q->arr[q->front];
    }  
    return a;
}
int main()
{
    struct Queue q;
    q.size=3;
    q.front=q.rear=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    // enqueuing elements
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,1);
    printf("\nDequeueing element is: %d",dequeue(&q));
    printf("\ndequeueing element is: %d",dequeue(&q));
    printf("\ndequeueing element is: %d",dequeue(&q));
    if(isempty(&q))
      printf("\nQueue is empty.");
    if(isfull(&q))
      printf("\nQueue is full.") ; 
}