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
{
    return s->arr[s->top];
}
int Size(struct stack *s)
{
    return s->top+1;
}
int peek(struct stack *s,int i)
{
    int arrayind=s->top-i+1;
    if(arrayind<0)
      {   printf("\nNot a valid position..");
          return -1;
          }
     else 
        return s->arr[arrayind];     
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
  Push(s,17);
  printf("\nTopest element is:%d",s->arr[s->top]);
  printf("\nTopest element is:%d",s->arr[s->top-1]);
  printf("\nTopest element is:%d",s->arr[s->top-2]);
  for(int i=1;i<=s->top+1;i++)
  {
     printf("\nThe value at %d position is %d ",i,peek(s,i));
  }  
    

} 
