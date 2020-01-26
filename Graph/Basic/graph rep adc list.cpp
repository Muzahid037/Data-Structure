#include<bits/stdc++.h>
using namespace std;

void insertEdge(vector<int> adj[],int v1,int v2)
{
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}
void printgraph(vector<int> adj[],int V)
{
    for(int i=0; i<V; ++i)
    {
        for(int j=0; j< adj[i].size(); ++j)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int V,E;
    V=5;
    vector<int> adj[V];

    insertEdge(adj,1,2);
    insertEdge(adj,1,3);
    //insertEdge(adj,2,1);
    insertEdge(adj,2,3);
    insertEdge(adj,2,5);
    //insertEdge(adj,3,1);
    //insertEdge(adj,3,2);
    insertEdge(adj,3,4);
    insertEdge(adj,3,5);
    //insertEdge(adj,4,3);
    insertEdge(adj,4,5);
    //insertEdge(adj,5,2);
    //insertEdge(adj,5,3);
   // insertEdge(adj,5,4);



    printgraph(adj,5);

}
