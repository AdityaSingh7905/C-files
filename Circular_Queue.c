#include<stdio.h>
#include<stdlib.h>
struct circularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isfull(struct circularQueue *q)
{
    if((q->rear+1)%q->size==q->front)
      return 1;
    else 
      return 0;  
}
int isempty(struct circularQueue *q)
{
    if(q->front==q->rear)
      return 1;
    else
      return 0;  
}
void enqueue(struct circularQueue *q,int n)
{
    if(isfull(q))
      printf("\nThe circularQueue is full.");
    else
    {  printf("\nEnqueueing element is: %d",n);
       q->rear=(q->rear+1)%q->size;  // circular increment
       q->arr[q->rear]=n;
    }   
}
int dequeue(struct circularQueue *q)
{   int val=-1;
    if(isempty(q))
      printf("\nThe queue is empty.");
    else{
        q->front=(q->front+1)%q->size;
        val=q->arr[q->front];
    }  
    return val;
}
int main()
{
    struct circularQueue q;
    q.size=4;
    q.front=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    // Enqueueing elements
    enqueue(&q,11);
    enqueue(&q,13);
    enqueue(&q,5);
    printf("\nDequeueing element is: %d",dequeue(&q));
    printf("\ndequeueing element is: %d",dequeue(&q));
    //printf("\ndequeueing element is: %d",dequeue(&q));
    if(isempty(&q))
      printf("\nQueue is empty.");
    if(isfull(&q))
      printf("\nQueue is full.") ;
}