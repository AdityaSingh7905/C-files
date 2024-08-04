//searching a key in a given binary search tree
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
void Search(struct node *root,int key)
{
    if(root==NULL)
      printf("\nSearched element is not found in the given binary search tree..");
    else if(root->data==key)
           printf("\nSearched element is present in the given tree.");
         else if(root->data>key)
                  Search(root->left,key);
              else
                  Search(root->right,key);       
}
void searchIter(struct node *root,int key)
{
    while(root!=NULL)
    {
        if(key==root->data)
          { printf("\n%d is found.",root->data);
            break;
          }
        else if(key<root->data)
               root=root->left;
             else
               root=root->right;
    }
    if(root==NULL)
      printf("\nSearched element is not found in the given binary tree..");
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
    //Search(p,n);  
    searchIter(p,n);                     
}