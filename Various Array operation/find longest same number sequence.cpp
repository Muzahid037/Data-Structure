#include <bits/stdc++.h>
using namespace std;


void getLongestSameSeq(int *a, int n)
{
    int cnt=0,mx=0,idx=0,startIndex=0,endIndex;

    for (int k = 0; k < n; k++)
    {
        if (a[k] == a[k+1])
        {
            cnt++;
            if(cnt==1){idx=k;}
        }
        else
        {
            mx=max(mx,cnt);
            if(mx==cnt)
            {
                startIndex=idx;
                endIndex=startIndex+mx;
            }
            cnt=0;
        }
    }
    cout<<"StartIndex="<<startIndex<<" EndIndex="<<endIndex<<" Length="<<mx+1<<endl;
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    getLongestSameSeq(arr, n);
    return 0;
}
