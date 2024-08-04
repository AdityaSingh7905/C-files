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
//condition for searching if it is a Binary Search tree
int isBSTUtil(struct node *root,int minvalue,int maxvalue)
{
    if(root==NULL)
      return 1;
    if(root->data>minvalue&&root->data<maxvalue&&isBSTUtil(root->left,minvalue,root->data)&&isBSTUtil(root->right,root->data,maxvalue))
      return 1;
    else
      return 0;    
}
int isBST(struct node *root)
{
    return isBSTUtil(root,INT_MIN,INT_MAX);
}
int IsBST(struct node *root)
{  static struct node *prev=NULL;
    if(root==NULL)
       return 1;
    else
    {  if(!IsBST(root->left))
         return 0;
       if(prev!=NULL&&root->data<=prev->data)
         return 0;
        prev=root;
        return IsBST(root->right);  

    }   
       
}
int main()
{   //Allocating memory in the heap
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
    //int a=isBST(p);
    int a=IsBST(p);
    if(a==1)
      printf("Searched tree is a BST..\n");
    else
      printf("Searched tree is not a BST..\n");  
}