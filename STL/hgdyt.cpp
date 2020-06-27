#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2,curr;
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
            else if(str=="BACK" && !b.empty())
            {
                f.push(b.top());
                b.pop();
                curr=b.top();
                cout<<curr<<endl;
                f.push(curr);
                if(b.size()!=1){b.pop();}

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
