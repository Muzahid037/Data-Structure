#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    set<int>s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a==1)
        {
            s.insert(b);
        }
        else if(a==2)
        {
            s.erase(b);
        }
        else
        {
            set<int>::iterator itr=s.find(b);
        if(itr==s.end()){cout<<"No"<<endl;}
        else{cout<<"Yes"<<endl;}
        }
    }
    return 0;

}
