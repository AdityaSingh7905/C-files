#include<bits/stdc++.h>
using namespace std;

// Creating a templete 
template<typename T>

// Creating graph
class graph{
    public:
    unordered_map<T,list<T>> adjList;

    // Function to add number in adj list
    void addList(T u,T v,bool direction){
        adjList[u].push_back(v);

        // if direction == 1 then undirected graph
        if(direction){
            adjList[v].push_back(u);
        }
    }

    // Function to print the graph adj List
    void Print(){
        for(auto i : adjList){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    // Taking no of vertex as input
    int n,m;
    cout<<"Enter the no of nodes: ";
    cin>>n;

    // Taking no of edges as input
    cout<<"Enter the no of Edges: ";
    cin>>m;

    graph<int> g;
    cout<<endl<<"----------------Making the adjancy List-------------------"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        // making directed graph
        g.addList(u,v,0);
    }

    // printing the adjancy list
    cout<<endl<<"-------------Printing the adjancy List-----------------"<<endl;
    g.Print();

    graph<int> gT;
    for(auto i : g.adjList){
        int num = i.first;
        for(auto j : i.second){
            gT.addList(j,num,0);
        }
    }

    cout<<endl<<"-----------------Printing the transpose of adjancy List---------------"<<endl;
    gT.Print();

    return 0;
}