#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    string p;
    map<string,int>s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>p;
        if(a==1)
        {
            cin>>b;
            map<string,int>::iterator itr=s.find(p);
            if(itr==s.end()){
                s.insert(make_pair(p,b));}
                else{
                    s[p]+=b;
                }

        }
        else if(a==2)
        {
            s.erase(p);
        }
        else
        {
           cout<<s[p]<<endl;
        }
    }
}
