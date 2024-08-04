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
struct node * inorderpredecessor(struct node *root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node * deleteNode(struct node *root,int key)
{   if(root==NULL)
       return NULL;
    if(root->left==NULL&&root->right==NULL)  //implies that it is a leaf node
    {
       free(root);
       return NULL;
    }   
    //Searching of the node to be deleted
    if(key<root->data)
       root->left=deleteNode(root->left,key);
    else if(key>root->data)
          root->right=deleteNode(root->right,key);       
        //Deletion strategy when the node is found
         else
         {
            struct node *iPre=inorderpredecessor(root);
            root->data=iPre->data;
            root->left=deleteNode(root->left,iPre->data);
         }
    return root;    
    
}
void inorderTraversal(struct node *root)
{
    if(root!=NULL)
    {
        inorderTraversal(root->left);
        printf("%d\t",root->data);
        inorderTraversal(root->right);
    }
}
int main()
{  //Allocating memory in the heap
    struct node *p=createNode(9);
    struct node *p1=createNode(4);
    struct node *p2=createNode(11);
    struct node *p3=createNode(2);
    struct node *p4=createNode(7);
    struct node *p5=createNode(15);
    struct node *p6=createNode(5);
    struct node *p7=createNode(8);
    struct node *p8=createNode(14);
    //Linking of the nodes
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->right=p5;
    p4->left=p6;
    p4->right=p7;
    p5->left=p8;
    //Corresponding tree is as follows:
    /*                        9
                            /    \
                          4         11
                         / \        / \
                       2      7    NULL   15
                            /  \          /  \
                          5    8        14   NULL  */
    inorderTraversal(p);  
    printf("\n");                      
    p=deleteNode(p,4);
    //printf("Data is %d\n",p->data);
    inorderTraversal(p);                       

}