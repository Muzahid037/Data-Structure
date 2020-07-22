#include<bits/stdc++.h>
using namespace std;

int parent[100000];
int rnk[100000];

void makeSet(int v)
{
    parent[v] = v;
}
/*
///----without Path compression find_set()/Naive find_set()----///
int findRoot(int v)
{
    if (v == parent[v])
        return v;
    return findRoot(parent[v]);
}
*/
///----With Path compression optimization find_set()----///
int findRoot(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
/*
///---without rank union_set---///
void union_sets(int a, int b)
{
    a = findRoot(a);
    b = findRoot(b);
    if (a != b)
        parent[b] = a;
}
*/
void Union(int a,int b)
{
    int x=findRoot(a);
    int y=findRoot(b);
    if(x==y)
    {
        return;
    }
    if(rnk[x]==rnk[y])
    {
        parent[y]=x;
        rnk[x]++;
    }
    else if(rnk[x]>rnk[y])
    {
        parent[y]=x;
    }
    else if(rnk[x]<rnk[y])
    {
        parent[x]=y;
    }
}
int main()
{
    int ms;
    cin>>ms;
    for(int i=1; i<=ms; i++)
    {
        int s;
        cin>>s;
        makeSet(s);
    }
    int u;
    cin>>u;
    for(int i=1; i<=u; i++)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    int fs;
    cin>>fs;
    for(int i=1; i<=fs; i++)
    {
        int f;
        cin>>f;
        cout<<findRoot(f)<<endl;
    }
    return 0;
}
