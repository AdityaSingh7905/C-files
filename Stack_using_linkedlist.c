#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
struct stack * createNode(struct stack *s,int data)
{
    struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
    ptr->data=data;
    ptr->next=s;
    //s=ptr;
    return ptr;
}
int isempty(struct stack *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int isfull(struct stack *ptr)
{
    if (ptr == NULL)
        return 1; // heap memory is exhausted
    else
        return 0;
}
struct stack * push(struct stack *top, int data)
{   
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    if (isfull(ptr))
        printf("\nStack is full!Can't push %d into the stack.", data);
    else
    {
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(struct stack *tp)
{   
    struct stack *ptr;
    if(isempty(tp))
      printf("\nStack is empty!Can't pop anything.");
    else
    {  int a=tp->data;
       ptr=tp;
       top=tp->next;
       free(ptr);
       return a;
    }  
}
void print(struct stack *s)
{
    while(s!=NULL)
    {
        printf("\nElement is: %d",s->data);
        s=s->next;
    }
}
int main()
{
   
    top=push(top,19);
    top=push(top,23);
    top=push(top,29);
    top=push(top,31);
    printf("\nElements of the stack is:-");
    print(top);
    printf("\n%d is popped from the stack.",pop(top));
    print(top);
}