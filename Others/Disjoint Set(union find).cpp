///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

#define Max 100

int parent[Max];
int sz=6;
void makeSet(int n)
{
    parent[n]=n;

}

int Find(int reprasentative)
{
    if (parent[reprasentative] == reprasentative)
    {
        return reprasentative;
    }
    return parent[reprasentative] = Find(parent[reprasentative]);
}
void Union(int a,int b)
{
    int u = Find(a);
    int v = Find(b);
    if(u == v)
    {
        cout<<a<<" & "<<b<<" are already friends "<<endl;
    }
    else parent[u]=v;
}
int main(int argc, const char * argv[])
{

    for (int i=0; i < sz; i++)
    {
        makeSet(i);
    }

    Union(1,2);
    Union(2,3);
    Union(1,3);


    return 0;
}
