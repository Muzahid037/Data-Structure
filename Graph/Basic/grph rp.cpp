#include<bits/stdc++.h>
using namespace std;
int t;
int main()
 {
	//code
	int v,e,i,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>v;
        cin>>e;
	    vector<int> a[v];
	    for(i=0;i<e;i++)
	    {
	        cin>>x;
	        cin>>y;
	        a[x].push_back(y);
	        a[y].push_back(x);
	    }
	    for(i=0;i<v;i++)
	    {
	        cout<<i;
	        for(int it=0;it<a[i].size();++it)
	            cout<<"-> "<<a[i][it];
	        cout<<endl;
	    }
	}
	return 0;
}
