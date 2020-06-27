#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int n,a,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }


    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x;

        vector<int>::iterator low,up;
        low=lower_bound (v.begin(), v.end(), x);
        // up=upper_bound (v.begin(), v.end(), 20);
        if(*low==x)
        {
            cout<<"Yes ";
        }
        else
        {
            cout<<"No ";
        }
        cout<<(low- v.begin())+1<< '\n';
        // cout << "upper_bound at position " << (up - v.begin()) << '\n';



    }
}
