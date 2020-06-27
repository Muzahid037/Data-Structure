#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    list<char>c;
    list<char>::iterator j;
    while(cin>>s)
    {
        c.clear();
        j = c.begin();
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]=='[')
            {
                j = c.begin();
            }
            if(s[i]==']')
            {
                j = c.end();
            }
            if(s[i]!='[' && s[i]!=']')
            {
                c.insert(j,s[i]);
            }
        }
        for(j=c.begin(); j!=c.end(); j++)
        {
            cout<<*j;
        }
        cout<<endl;
    }
    return 0;
}
