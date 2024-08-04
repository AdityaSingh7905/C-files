#include<stdio.h>
#include<stdlib.h>
struct graph
{
    int V;
    int E;
    int **Adj;
};
struct graph * adjMatrix()
{   int u,v;
    struct node *G=malloc(sizeof(struct graph));
    if(G)
    {
        printf("\nNo memory allocated!!");
        return NULL;
    }
    printf("\nEnter the number of nodes and edges:");
    scanf("%d %d",&G->V,&G->E);
    G->Adj=malloc(sizeof(int)*(G->V*G->V));
    for(int u=0;u<G->V;u++)
       for(int v=0;v<G->V;v++)
            G->Adj[u][v]=0;
    printf("\nEnter nodes no. in pair for an edge:");
    for(int i=0;i<G->E;i++)
    {
        scanf("%d %d",&u,&v);
        G->Adj[u][v]=1;
        G->Adj[v][u]=1;
    }
    int main()
    {
        adjMatrix();
    }
}