///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;


void brute_rmq(int arr[],int arrsz,int m)
{
    vector<int>res;

    for(int i=0; i<arrsz-(m-1); i++)
    {
        vector<int>sub;
        for(int j=i; j<i+m; j++)
        {
            sub.push_back(arr[j]);
           // cout<<arr[j]<<" ";
        }
       // cout<<endl;

        sort(sub.begin(),sub.end());

        res.push_back(sub[0]);
    }

   for(vector<int>::iterator it=res.begin(); it!=res.end(); it++)
   {
        cout<<*it<<" ";
   }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;


    int arr[99999];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
     brute_rmq(arr,n,3);

    return 0;
}





/*
def brute_rmq(arr,m):
	res=[]
	for i in range(0,len(arr)-m+1):
		subarr=arr[i:i+m] #take subarray of size m, starting from index i
		res.append(min(subarr)) #append the minimum element in result
	return res
	*/
