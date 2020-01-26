#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5],sum[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sum[0]=arr[0];
    for(int i=1; i<=n; i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
    /*    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }  */
    cout<<sum[2]<<endl<<sum[0]<<endl;
    int q;
    cin>>q;
    for(int x=0; x<q; x++)
    {
        int i,j;
        cin>>i>>j;
        int res=sum[j]-sum[i-1];
        cout<<res<<endl;
    }
    return 0;

}
