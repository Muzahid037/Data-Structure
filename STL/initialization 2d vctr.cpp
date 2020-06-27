#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >matrix;
    int r=3,c=4,i=5;
    matrix.resize(r,vector<int>(c,i));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
