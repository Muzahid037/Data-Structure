#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1<s2)
    {
       cout<<s1<<" is lexicographically smaller than "<<s2<<endl;
    }
    else if(s1==s2)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<s2<<" is lexicographically smaller than "<<s1<<endl;
    }

    return 0;
}

/*
bool cmp(char cs1,char cs2)
{
    if(tolower(cs1)<tolower(cs2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end(),cmp))
    {
        cout<<s1<<" is lexicographically smaller than "<<s2<<endl;
    }
    else
    {
        cout<<s2<<" is lexicographically smaller than "<<s1<<endl;


    return 0;
}
*/
