#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int>v1,v2,v3,v4;
    v1.push_back(1);
    v1.push_back(2);
    v2=v1;  //copying vector v1 into v2
    for(i=0;i<v2.size();i++) {
        printf("%d ",v2[i]);}


    printf("\n");
     if(v1==v2)    //checking either two vector are equals or not.
        printf("Yes\n");
     else
        printf("no\n");
    v2.push_back(5);
      for(i=0;i<v2.size();i++) {
        printf("%d ",v2[i]);}
        cout<<endl;
    if(v1==v2)
        printf("Yes\n");
    else
        printf("no\n");
    return 0;
}
