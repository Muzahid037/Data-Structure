#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{

    vector< int > v;
    v.push_back( 7 );
    v.push_back( 8 );
    v.push_back( 12 );
    vector< int > :: iterator i;
    for( i = v.begin(); i < v.end(); i++ )
    {
        printf("%d\n", *i);
        // ei khane gola kato!
    }
}
