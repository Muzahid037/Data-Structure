#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,x,y,ct1,ct2;
    queue<int>q;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<endl;
            break;
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a==0)
            {
                return 0;
            }
            q.push(a);
        }
        ct1=0;
        ct2=0;
        for(int i=0; i<n; i++)
        {
            x=q.front();
            q.pop();
            y=q.front();
            if(x>y)
            {
                ct1++;
            }
            if(x<y)
            {
                ct2++;
            }
        }
        if(ct1==n || ct2==n)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
