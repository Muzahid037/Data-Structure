///------------By regular expression--------------///
#include<bits/stdc++.h>
using namespace std;
string disemvowel(string str)
{
    regex vowels("[aeiouAEIOU]");
    return regex_replace(str, vowels, "");
}
int main()
{
    string str;
    getline(cin,str);
    string ans=disemvowel(str);
    cout<<ans<<endl;
    return 0;
}
