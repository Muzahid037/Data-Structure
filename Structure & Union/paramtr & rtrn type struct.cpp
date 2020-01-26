#include<bits/stdc++.h>
using namespace std;
struct mystr
{
    int x;
    float y;
};

void print(struct mystr m1)
{
    cout<<m1.x<<" "<<m1.y<<endl;
}
struct mystr add(struct mystr m1,struct mystr m2)
{
    struct mystr sum;
    sum.x=m1.x+m2.x;
    sum.y=m1.y+m2.y;
    return sum;
};

int main()
{
    struct mystr s1,asgn,s2,res;
    s1.x=10;
    s1.y=10.5;
    s2.x=20;
    s2.y=20.5;
    print(s1);
    asgn=s1;
    //print(asgn);
    print(s2);
    res=add(s1,s2);
    print(res);
}
