#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,j;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int x,y,z;
    cin>>x;
    v.erase(v.begin()+x-1);
    cin>>y>>z;

        v.erase(v.begin()+y-1,v.begin()+z-1);

        cout<<v.size()<<endl;
        for(j=0; j<v.size()-1; j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<v[j]<<endl;

}
