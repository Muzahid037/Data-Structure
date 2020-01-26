
#include <bits/stdc++.h>
#define pb push_back

using namespace std;

vector<bool> v;
vector<int>adj[10000+5];

int arr[10000+5];
int man[10000+5];

void bfs(int u)
{
    queue<int> q;

    q.push(u);
    arr[u]=arr[u]+1;
    v[u] = true;

    while (!q.empty()) {

        int f = q.front();
        q.pop();
        for (int i=0;i<adj[f].size();i++) {
            if (v[adj[f][i]]==false) {
                q.push(adj[f][i]);
                v[adj[f][i]] = true;
                arr[adj[f][i]]+=1;
            }
        }
    }
}
int main()
{
     int t,n,m,k,a,b;

    scanf("%d",&t);

    for(int ca=1; ca<=t; ca++)
    {
       // v.assign(n, false);
        scanf("%d%d%d",&k,&n,&m);

        for(int i=1; i<=k; i++)
        {
            cin>>man[i];
        }
        for(int i=1; i<=m; i++)
        {
           cin>>a>>b;
           adj[a].push_back(b);
        }
        for(int i=1; i<=k; i++)
        {
                    v.assign(n, false);
            bfs(man[i]);

        }
        //for(int i=0; i<1002; i++) v[i].clear();
        int cnt=0;

        for(int i=1; i<=n; i++ )
        {
            if(arr[i]==k) cnt++;
        }

        printf("Case %d: %d\n",ca,cnt);

        memset(arr,0,sizeof(arr));

        for(int i=0; i<1002; i++){ adj[i].clear();}
    }
    return 0;
}

