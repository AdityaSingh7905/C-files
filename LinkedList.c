#include<stdio.h>
#include<stdlib.h>
struct Node   
{
    int data;   // stores value
    struct Node *next;  // stores address of the next node
};
void linkedlist_traversal(struct Node *ptr)
{   while(ptr!=NULL)
   { printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
   }
}
int main()
{
    struct Node *head= malloc(sizeof(struct Node));
    struct Node *second= malloc(sizeof(struct Node));
    struct Node *third= malloc(sizeof(struct Node));
    struct Node *fourth= malloc(sizeof(struct Node));
    // linking head and second
    head->data=7;
    head->next=second;
    // linking second and third
    second->data=11;
    second->next=third;
    // linking third and fourth
    third->data=46;
    third->next=fourth;
    // terminating the linked list
    fourth->data=66;
    fourth->next=NULL;
    // calling the function 
    linkedlist_traversal(head);
}