#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    vector<int>a[10000];

    while(1)
{
    cin>>n;
    if(n==0){return 0;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
        cin>>b;
        a[i].push_back(b);
        }
    }
    for(int i=0;i<n;i++){
    sort(a[i].begin(),a[i].end()); }

for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
        for(int i=0;i<n;i++){

    a[i].clear();}


    // for(int i=0;i<n;i++){
     //    x=a[i][j]-
    // }

}
}
