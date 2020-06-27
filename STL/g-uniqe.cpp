#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s;
    int t,n,a,ans,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s.insert(a);
            x=s.size();
            ans=max(ans,i-x);
        }
        cout<<ans<<endl;
        s.clear();
    }
}
