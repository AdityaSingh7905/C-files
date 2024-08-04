#include<stdio.h>
#include<stdlib.h>
#define MaxNode 4
struct node
{
    int vertexnum;
    struct node *next;
};
struct list
{
    struct node *head;
};
struct list *adjlist[MaxNode]={0};
void addnode(int s,int d)
{
    struct node *src,*temp,*dest;
    if(adjlist[s]->head==NULL)
    {
         src=(struct node *)malloc(sizeof(struct node));
         src->vertexnum=s;
         src->next=NULL;
         adjlist[s]->head=src;

    }
    dest=(struct node *)malloc(sizeof(struct node));
    dest->vertexnum=d;
    dest->next=NULL;
    temp=adjlist[s]->head;
    while(temp->next!=NULL)
       temp=temp->next;
    temp->next=dest;   
}
void printlist(struct list *adjlist[])
{
    for(int i=0;i<MaxNode;i++)
    {
        struct node *p=adjlist[i]->head;
        printf("\nAdjacency list of vertex: %d\n",i);
        while(p)
        {
            printf("%d\t",p->vertexnum);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    
    for(int i=0;i<MaxNode;i++)
    {
         adjlist[i]=(struct list *)malloc(sizeof(struct list));
         adjlist[i]->head=NULL;
    }
    addnode(0,1);
    addnode(0,2);
    addnode(0,3);
    addnode(1,0);
    addnode(1,2);
    addnode(2,0);
    addnode(2,1);
    addnode(2,3);
    addnode(3,0);
    addnode(3,2);
    printlist(adjlist);
}