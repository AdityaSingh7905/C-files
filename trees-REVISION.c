#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node * createnode(int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void preOrder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d",root->data);
    }
}
void inOrder(struct node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
int Issubtreelesser(struct node *root,int data)
{
    if(root==NULL)
      return 1;
    else if(root->data<data&&Issubtreelesser(root->left,data)&&Issubtreelesser(root->right,data))
             return 1;
         else 
             return 0;      
}
int Issubtreegreater(struct node *root,int data)
{
    if(root==NULL)
      return 1;
    else if(root->data>data&&Issubtreegreater(root->left,data)&&Issubtreegreater(root->right,data))
            return 1;
         else
            return 0;     
}
int isBST(struct node *root)
{
    if(root==NULL)
      return 1;
    else if(Issubtreelesser(root->left,root->data)&&Issubtreegreater(root->right,root->data)&&isBST(root->left)&&isBST(root->right))
            return 1;
         else
            return 0;     
}
int isBSTUtil(struct node *root,int minValue,int maxValue)
{
    if(root!=NULL)
      return 1;
    else if(root->data>minValue&&root->data<maxValue&&isBSTUtil(root->left,minValue,root->data)&&isBSTUtil(root->right,root->data,maxValue))
          return 1;
         else
          return 0;   
}
int isbst(struct node *root)
    { 
      return isBSTUtil(root,INT_MIN,INT_MAX);
    } 
void SearchBST(struct node *root,int data)
{
    if(root==NULL)
      printf("\nElement Not Found!!");
    else if(root->data==data)
            printf("\nElement is present in given BST");
         else if(root->data>data)
                 SearchBST(root->left,data);
              else
                 SearchBST(root->right,data);     
}  
void SearchIterBST(struct node *root,int data)
{
    while(root!=NULL)
    {
        if(root->data==data)
        {
            printf("\nElement %d is found!!",root->data);
            break;
        }
        else if(root->data>data)
                root=root->left;
             else
                root=root->right;   
    }
    if(root==NULL)
      printf("\nSearched element is not present!!");
} 
void Insert_BST(struct node *root,int data)
{
    struct node *prev;
    while(root!=NULL)
    {   prev=root;
        if(root->data==data)
        {
            printf("\nCan't insert %d as it is already present in given BST!!",root->data);
            return ;
        }
        else if(root->data>data)
               root=root->left;
             else
               root=root->right; 
    }
    struct node *new=createnode(data);
    if(prev->data>data)
      prev->left=new;
    else
      prev->right=new;   
} 
struct node * Delete(struct node *root,int data)
{  struct node *p=root;
   while(p!=NULL)
   { if(p->data==data)
            {  printf("\n %d is deleted!!",p->data);
                free(p);
                return NULL;
                
            }
          else if(data<p->data)
                 p=p->left;
               else
                 p=p->right;
   }
   if(p==NULL)
     printf("\nSearched element is not Found!!!");             
    return root;                   
}
struct node * inOrderPredecessor(struct node *root)
{    root=root->left;
     while(root->right!=NULL)
     {
         root=root->right;
     }
     return root;
    
}
struct node * inOrderSuccessor(struct node *root)
{    root=root->right;
     while(root->left!=NULL)
     {
         root=root->left;
     }
     return root;
}
struct node * delete_node(struct node *root,int data)
{    
     if(root==NULL)
        return NULL;
     if(root->left==NULL&&root->right==NULL)
     {
         free(root);
         return NULL;
     }   
     // Searching for the element to be deleted
     if(data<root->data)
       root->left=delete_node(root->left,data);
     else if(data>root->data)
           root->right=delete_node(root->right,data);
           //Deleting element is found
          else
          {
              struct node *ipre=inOrderPredecessor(root);
              root->data=ipre->data;
              root->left=delete_node(root->left,ipre->data);
          }
     return root;      
}
int main()
{
   struct node *root=createnode(4);
   struct node *A=createnode(2);
   struct node *B=createnode(6);
   struct node *C=createnode(1);
   struct node *D=createnode(3);
   //linking of the following to make a  tree
   root->left=A;
   root->right=B;
   A->left=C;
   A->right=D;
   // tree will look like this;
   /*                                  4
                                    /      \
                                   2        6
                                 /    \
                                1     3                */
    //preOrder(root); 
    //postOrder(root);
    //inOrder(root);
    /*int a=isbst(root);
    if(a==1)
      printf("\nGiven tree is a Binary Search tree..");
    else
      printf("\nGiven tree is not a binary search tree..");      */
    //SearchBST(root,3);
    //SearchIterBST(root,3);
    //Insert_BST(root,5);
    //printf("\nElement is: %d",root->right->left->data);
    inOrder(root);
    root=delete_node(root,3);
    printf("\n");
    inOrder(root);
    //printf("\n%d",root->right->data);
}