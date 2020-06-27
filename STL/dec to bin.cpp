#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ct=0;
    bitset<8>x;
    while(x!=0)
    {
        if(x%10==1){ct++;}
        x=x/10;
    }
    cout<<ct;
  }
