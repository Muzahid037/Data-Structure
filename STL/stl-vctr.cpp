#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,h,m,n,p,x,y,i,j,k,l,q,r,t,cnt,sm,tmp;
    int num_of_row = 3;
    int num_of_col = 4;
    int init_value = 5;
    vector< vector<int> > mat; //now we have an empty 2D-matrix of size (0,0). Resizing it with one single command:
    mat.resize( num_of_row, vector<int>( num_of_col, init_value ) );   // and we are good to go ...
    for(i=0; i<num_of_row; i++)
    {
        for(j=0; j<num_of_col; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}
