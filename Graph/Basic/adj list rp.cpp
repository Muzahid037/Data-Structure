
// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.


// A utility function to print the adjacency list
// representation of graph
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

// Driver code
int main()
{ int u,v,E;
    int V ;
    cin>>V;
    vector<int> adj[V];
cin>>E;

    for(int i=0;i<E;i++)
{
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

    printGraph(adj, V);
    return 0;
}
