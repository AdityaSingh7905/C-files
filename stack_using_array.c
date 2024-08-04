#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr; //  integer pointer for requesting memory in the heap
};
int isempty(struct stack *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    else
        return 0;
}
void push(struct stack *s, int data)
{
    if (isfull(s))
        printf("\nStack Overflow!Can't push %d in the stack.",data);
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}
int pop(struct stack *s)
{
    if (isempty(s))
    {  
          printf("\nStack is empty!Can't pop anything from the stack.");
          return -1;
    }
    else
        return s->arr[s->top--];
}
int top(struct stack *s)
{
    if(isempty(s))
    {
          printf("\nStack is empty!!Can't tell anything about the topest element.");
          return -1;
    }
    else
      return s->arr[s->top];  
}
int bottom(struct stack *s)
{
     return s->arr[0];
}
int peek(struct stack *s,int i)
{
    int arrayInd=s->top-i+1;
    if(arrayInd<0)
    {
        printf("\nInvalid index!Please try with another index.");
        return -1;
    }
    else 
       return s->arr[arrayInd];
}
int main()
{   int i;
    /*struct stack s;
    s.size = 50;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));*/
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=8;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    printf("\nStack has been created successfully!");
    push(s,11);
    push(s,12);
    push(s,13);
    push(s,14);
    push(s,15);
    //push(s,16);
    //push(s,17);
    //push(s,18);
    //push(s,19);
    
    printf("\n%d is popped from the stack.",pop(s));
    printf("\n%d is popped from the stack.",pop(s));
    printf("\n%d is popped from the stack.",pop(s));
    //printf("\n%d is popped from the stack.",pop(&s));
    //printf("\n%d is popped from the stack.",pop(&s));
    printf("\nTopest element is: %d",top(s));
    printf("\nBottommost element is: %d",bottom(s));
    /*if(isempty(s))
      printf("\nThe stack is empty!!");
    else 
      printf("\nThe stack is not empty!!");
    if(isfull(s))
      printf("\nThe stack is full!!");
    else
      printf("\nThe stack is not full!!");*/
    
    for(int j=1;j<=s->top+1;j++)
    {
        printf("\n%d is present on the position %d.",peek(s,j),j);
    }  
}