#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q;
    string s1,s2;
    map <string , string> mp;
    map <string ,string> :: iterator j;
    cin>>t;
    //getchar();
    cin.ignore();
    while(t--)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp.insert(make_pair(s1,s2));
    }
    cin>>q;
    //getchar();
    cin.ignore();
    while(q--)
    {
        getline(cin,s1);
        j=mp.begin();
        while(j!=mp.end())
        {
            if(j->first==s1)
            {
                cout<<j->second<<endl;
                break;
            }
            else if(j->second==s1)
            {
                cout<<j->first<<endl;
                break;
            }
            j++;
        }
    }

return 0;
}
