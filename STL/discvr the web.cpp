#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;
    stack<string>b,f;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        b.push("http://www.lightoj.com/");
        while(1)
        {
            cin>>str;
            if(str=="QUIT")
            {
                break;
            }
            else if(str=="VISIT")
            {
                cin>>str2;
                cout<<str2<<endl;
                b.push(str2);
            }
            else if(str=="FORWARD" && f.size()>1)
            {
                cout<<f.top()<<endl;
                b.push(f.top());
                f.pop();

            }
            else if(str=="BACK" && b.size()>1)
            {
                f.push(b.top());
                b.pop();
                cout<<b.top()<<endl;
            }
            else
            {
                cout<<"Ignored"<<endl;
            }
        }

        while(!b.empty())
        {
            b.pop();
        }
           while(!f.empty())
        {
            f.pop();
        }
    }
}
