#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,array[26]= {0};
    string userName;
    cin>>userName;
    for(int i=0; i<userName.length(); i++)
    {
        if(array[userName[i]-'a']==0)
        {
            array[userName[i]-'a']++;
            c++;

        }
    }
   cout<<userName<<endl;
    if(c%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
