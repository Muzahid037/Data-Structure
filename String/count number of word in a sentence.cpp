#include <bits/stdc++.h>
using namespace std;

int countNoOfWord(string s)
{
    //cout<<s.size()<<endl;
    int cnt=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        {
            cnt++;;
        }
    }
    return cnt;
}

int main()
{
    string s;
    getline(cin,s);
    //cout<<s<<endl;
    cout<<"No of word is "<<countNoOfWord(s)+1<<endl;

    return 0;
}
