
#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];

void DFSUtil(int u,vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], visited);
}

void DFS( int V)
{
    vector<bool> visited(V, false);
    for (int u=0; u<V; u++)
    {
        if (visited[u] == false)
            DFSUtil(u, visited);
    }
}

int main()
{
    int V,e,u,v;
    cin>>V>>e;
    for(int i=1; i<=e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(V);

    return 0;
}
