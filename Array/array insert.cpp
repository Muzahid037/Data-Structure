#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,pos,value,len;
    cin>>n;
    int a[n];

    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    cin>>pos>>value;

    for(int i=n-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;


    len = sizeof(a)/sizeof(a[0]);
    cout<<len;

//    for(int i=0; i<arrySize; i++)
//    {
//        cout<<a[i]<<" ";
//    }

    return 0;
}
