#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for(int i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[n-1]<<endl;
    return 0;
}
