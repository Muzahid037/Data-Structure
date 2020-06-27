#include <bits/stdc++.h>
using namespace std;

bool is_s1_is_Sub_of_s2(string s1,string s2,int n,int m)
{
    cout<<s1<<" "<<s2<<endl;;
    if(n==0){return true;}
    if(m==0){return false;}

    if(s1[n-1]==s2[m-1]){return is_s1_is_Sub_of_s2(s1,s2,n-1,m-1);}
    return is_s1_is_Sub_of_s2(s1,s2,n,m-1);

}

int main()
{
    string s1,s2;      ///is s1 subsequence of s2
    getline(cin,s1);
    getline(cin,s2);
    int n=s1.length();
    int m=s2.length();
   // cout<<n<<m<<endl;

    cout<<is_s1_is_Sub_of_s2(s1,s2,n,m)<<endl;;


    return 0;
}

