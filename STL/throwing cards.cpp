#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>a;
    int n,j,x;
    while(cin>>n){
            if(n==0){return 0;}
    for(int i=0;i<n;i++)
    {
    a.push(i+1);
    }
    cout<<"Discarded cards:";
    while(a.size()>1)
    {
        cout<<" "<<a.front();
       // if(a.size()>0){cout<<", ";}
        a.pop();
       x=a.front();
       a.pop();
        if(a.size()!=0){cout<<",";}
       a.push(x);

    }
    cout<<endl<<"Remaining card: "<<a.front()<<endl;
    a.pop();
    }
}
