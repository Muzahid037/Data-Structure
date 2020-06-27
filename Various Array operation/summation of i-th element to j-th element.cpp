#include <bits/stdc++.h>
using namespace std;


void calculate(int *a,int *sum, int n)
{

    for (int k = 0; k<n; k++)
    {
        for(int x=0; x<=k; x++)
        {
            sum[k+1]+=a[x];
        }
    }
    for(int k=0;k<n+1;k++)
    {
        cout<<sum[k]<<" ";
    }
    cout<<'\n';
}

int main()
{
    int arr[100],sum[100];
    memset(sum,0,sizeof(sum));
    int n;
    cin>>n;
    for(int k=0; k<n; k++)
    {
        cin>>arr[k];
    }
    calculate(arr,sum, n);


    int i_th,j_th;
    cin>>i_th>>j_th;

    cout<<sum[j_th]-sum[i_th-1]<<endl;



    return 0;
}
