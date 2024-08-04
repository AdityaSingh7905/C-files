#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node * createNode(int data)
{
    struct node *root=malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
void insert_BST(struct node *root,int key)
{
    struct node *prev;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("\nCannot insert %d as it is already present in given BST.");
            return ;
        }
        else if(key<root->data)
                root=root->left;
             else
                root=root->right;   
    }
    struct node *new=createNode(key);
    if(key<prev->data)
       prev->left=new;
    else
       prev->right=new;   
}
int main()
{   int n;
     //Allocating memory in the heap
    struct node *p=createNode(9);
    struct node *p1=createNode(4);
    struct node *p2=createNode(11);
    struct node *p3=createNode(2);
    struct node *p4=createNode(7);
    struct node *p5=createNode(15);
    struct node *p6=createNode(5);
    struct node *p7=createNode(8);
    struct node *p8=createNode(14);
    //Linking all the nodes
    p->left=p1;              
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->right=p5;
    p4->left=p6;
    p4->right=p7;
    p5->left=p8;
    // my tree wil look like this
    /*                        9
                            /    \
                          4         11
                         / \        / \
                       2      7    NULL   15
                            /  \          /  \
                           5    8        14   NULL  */
    printf("\nEnter the element to be searched:");
    scanf("%d",&n);
    insert_BST(p,n);
    printf("\n%d",p2->left->data);                     
}
