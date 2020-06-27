
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x;
    string s;
    deque<int>d;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m;
        cout<<"Case "<<i+1<<":"<<endl;
        while(m--)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>x;
                if(d.size()<n)
                {
                    d.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>x;
                if(d.size()<n)
                {
                    d.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(s=="popLeft")
            {
                if(!d.empty())
                {
                    cout<<"Popped from left: "<<d.front()<<endl;
                    d.pop_front();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            else if(s=="popRight")
            {
                if(!d.empty())
                {
                    cout<<"Popped from right: "<<d.back()<<endl;
                    d.pop_back();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
        }
        d.clear();
    }
}
