#include<bits/stdc++.h>
using namespace std;

void adEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    //vector<int>:: it;
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (int j=0; j<adj[ v].size(); ++j)
           cout <<" -> " <<adj[v][j];

        printf("\n");
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    adEdge(adj,5,6);
    adEdge(adj,5,9);
    adEdge(adj,5,11);
    adEdge(adj,11,6);

    //for(int i=0;i<e;i++)
    //{
    //  int a,b;
    // cin>>a>>b;
    //adEdge(adj,a,b);
    //}
    printGraph(adj,4);
}
