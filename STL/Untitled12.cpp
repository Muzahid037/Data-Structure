#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s1[100],s2[100],s3[100];
    map<char,char>mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        gets(s1);
        gets(s2);
        mp.insert(make_pair(s1,s2));
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        gets(s3);
       // cout<<mp["s3"]<<endl;
    }
}
