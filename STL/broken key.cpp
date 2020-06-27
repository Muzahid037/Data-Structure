#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    list<char>l;
    list<char>::iterator j;
    while(cin>>s)
    {
        l.clear();
        j=l.begin();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='['){j=l.begin();}
            if(s[i]==']'){j=l.end();}
            if(s[i]!='['&&s[i]!=']'){l.insert(j,s[i]);}
        }
        for(j=l.begin();j!=l.end();j++)
        {
            cout<<*j;
        }
        cout<<endl;


    }
}
