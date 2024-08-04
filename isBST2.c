#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node * createNode(int data)
{  struct node *root=malloc(sizeof(struct node));
   root->data=data;
   root->left=NULL;
   root->right=NULL;
   return root;
}
int isSubtreeLesser(struct node *root,int data)
{
    if(root==NULL)
      return 1;
  
    if((root->data<data)&&isSubtreeLesser(root->left,data)&&isSubtreeLesser(root->right,data))
          return 1;
    else
          return 0;  
      
}
int isSubtreeGreater(struct node *root,int data)
{
    if(root==NULL)
      return 1;
    
    if((root->data>data)&&isSubtreeGreater(root->left,data)&&isSubtreeGreater(root->right,data))
          return 1;
    else
          return 0;  
     
}
int isBST(struct node *root)
{
    if(root==NULL)
      return 1;
   
    if(isSubtreeLesser(root->left,root->data)&&isSubtreeGreater(root->right,root->data)&&isBST(root->left)&&isBST(root->right))
          return 1;
    else
         return 0;   
    
}
int main()
{
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
    int a=isBST(p);
    //int a=isBST(p);
    if(a==1)
      printf("Searched tree is a BST..\n");
    else
      printf("Searched tree is not a BST..\n");  
}