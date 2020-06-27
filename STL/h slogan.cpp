#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    string s1,s2,s3;
    map <string , string> mp;
    map<string,string>::iterator j;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp.insert(make_pair(s1,s2));
    }
    getchar();
    cin>>q;
    while(q--)
    {

        getline(cin, s1);
        j=mp.begin();
        while(j!=mp.end()){
        if(j->first==s1){cout<<j->second<<endl;break;}
        else if(j->second==s1){
				cout << j->first << endl;
				break;
			}
                j++;
        }
    }
}
