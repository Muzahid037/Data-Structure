#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ct;
    string a;
    string s1;
    map<string,int>mp;
    cin>>t;
    getline(cin,a);
    getline(cin,a);
    for(int i=0;i<t;i++)
    {
        ct=0;
        while(getline(cin,s1))
        {
            if(s1.length()==0)
            {
                break;
            }
           // mp.insert(make_pair(s1,1));

            map<string,int>::iterator itr=mp.find(s1);
            if(itr==mp.end())
            {
                mp.insert(make_pair(s1,1));
            }
            else
            {
                mp[s1]++;
            }
            ct++;
        }

        double x=100.0/ct;

      //cout << fixed << showpoint;
   // cout << setprecision(4);
        map<string,int> :: iterator it;
        for (it=mp.begin() ; it!=mp.end() ; it++)
        {
            cout<<it->first <<" "<<fixed<<setprecision(4)<<it->second*x<< endl;
        }
         mp.clear();

         if (i!=t-1)
        {
        cout<<endl;
        }


    }
}
