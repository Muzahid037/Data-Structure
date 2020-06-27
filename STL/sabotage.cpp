#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    int n,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--)
    {
        cout<<v[i]<<endl;
    }

}
