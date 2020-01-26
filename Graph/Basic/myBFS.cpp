#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int>adj[1000];
    int visit[1000]={0},previous[1000];
    int n,e,vertex,source,edge,x,y;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
      cin>>source;
      queue<int>q;
      q.push(source);
      visit[source]=1;
      int j=0;
      while(!q.empty())
      {
         int x=q.front();
         cout<<x<<" ";
         q.pop();
         for(vector<int>::iterator i=adj[x].begin();i!=adj[x].end();i++)
         {
             if(visit[*i]==0)
             {
                 previous[*i]=x;
                 q.push(*i);
                 visit[*i]=1;
             }
         }
      }
      int y;
      cin>>y;
      for(int i=y;i)

 return 0;
}

