#include<bits/stdc++.h>
using namespace std;

struct str{
    char name[100];
    int val;
};

swp(struct str *s_1,struct str *s_2)
{
    struct str temp;

    strcpy(temp.name,s_1->name);
    strcpy(s_1->name,s_2->name);    //name intercng
    strcpy(s_2->name,temp.name);

    temp.val=s_1->val;
    s_1->val=s_2->val;         //val intrcng
    s_2->val=temp.val;
}

int main()
{
    struct str s1,s2;
    cin>>s1.name>>s1.val>>s2.name>>s2.val;
    if(s1.val<s2.val)
    {
        swp(&s1,&s2);
    }
    cout<<s1.name<<" "<<s1.val<<endl<<s2.name<<" "<<s2.val;

}
