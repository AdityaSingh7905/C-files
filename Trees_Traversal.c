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
    struct node *p;
    p=(struct node *) malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preOrder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
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
        printf("%d ",root->data);
    }
}
void inOrder(struct node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int main()
{  // Constructing the root node using the above function
    struct node *p=createNode(4);
    struct node *p1=createNode(1);
    struct node *p2=createNode(6);
    struct node *p3=createNode(5);
    struct node *p4=createNode(2);
    // linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    //preOrder(p);
    //postOrder(p);
    inOrder(p);

}