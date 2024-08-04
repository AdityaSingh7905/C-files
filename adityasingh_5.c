#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
      return 1;
    else
      return 0;  
}
int isFull(struct stack *ptr)
{
   if(ptr->top==ptr->size-1)
     return 1;
   else
     return 0;  
}
void Push(struct stack *s,int n)
{
   if(isFull(s))
     printf("\nStack Overflow.Cannot push %d into the stack.",n);
   else
   {
     s->top++;
     s->arr[s->top]=n;
   }  
}
int Pop(struct stack *s)
{
   if(isEmpty(s))
     printf("\nStack Underflow.Cannot pop from the stack.");
   else
     return s->arr[s->top--];
}
int Top(struct stack *s)
{   if(isEmpty(s))
      printf("\nNo element is present is stack!!");
    else  
      return s->arr[s->top];
}
int Size(struct stack *s)
{   if(isEmpty(s))
      printf("\nNo element is present is stack!!");
    else  
      return s->top+1;
}
int main()
{
  /* struct stack s;
   s.size=80;
   s.top=-1;
   s.arr=(int *)malloc(s.size*sizeof(int)); */
  struct stack *s;
  s->size=80;
  s->top=-1;
  s->arr=(int *)malloc(s->size*sizeof(int)); 
  // Pushing an element manually
  s->arr[0]=7;
  s->top++;
  for(int i=10;i<16;i++)
  {
     Push(s,i);
  }
 
  printf("\nPopped %d from the stack.",Pop(s));
  printf("\nPopped %d from the stack.",Pop(s));
  Push(s,16);
  Push(s,17);
  printf("\nTopest element is:%d",Top(s));
  printf("\nNo. of elements in the stack is:%d",Size(s));

}
