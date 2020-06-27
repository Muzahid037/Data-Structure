#include <bits/stdc++.h>
using namespace std;

string addString(string s1,string s2)
{
 string s;
 s=s1+s2;
 return s;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<addString(s1,s2)<<endl;;


    return 0;
}
