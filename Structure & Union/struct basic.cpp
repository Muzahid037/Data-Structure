#include<bits/stdc++.h>
using namespace std;

struct cse16
{
    char name[20];
    int id;
    double cg;
};

void input(struct cse16 s[])
{
        for(int i=0;i<5;i++)
    {
        cin>>s[i].name>>s[i].id>>s[i].cg;
    }
}

void print(struct cse16 s[])
{
     for(int i=0;i<5;i++)
    {
    cout<<"Name:"<<s[i].name<<endl;
    cout<<"Id:"<<s[i].id<<endl;
    cout<<"CG:"<<s[i].cg<<endl;
    }
}

/*void idsort(struct cse16 s[])
{
    struct cse16 temp;
    int x;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            x=strcmp(s[i].name,s[j].name);
            if(x>0)
                {
                    strcpy(temp.name,s[i].name);
                    temp.id=s[i].id;
                    temp.cg=s[i].cg;

                    strcpy(s[i].name,s[j].name);
                    s[i].id=s[j].id;
                    s[i].cg=s[j].cg;

                    strcpy(s[j].name,temp.name);
                    s[j].id=temp.id;
                    s[j].cg=temp.cg;
                }
        }
    }
}   */

void namesort(struct cse16 s[])
{
    struct cse16 temp;
    int x;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            x=strcmp(s[i].name,s[j].name);
            if(x>0)
                {
                    strcpy(temp.name,s[i].name);
                    temp.id=s[i].id;
                    temp.cg=s[i].cg;

                    strcpy(s[i].name,s[j].name);
                    s[i].id=s[j].id;
                    s[i].cg=s[j].cg;

                    strcpy(s[j].name,temp.name);
                    s[j].id=temp.id;
                    s[j].cg=temp.cg;
                }
               // else if(x==0)
               // {
                //    idsort(s);
               // }
        }
    }
}

void cgsort(struct cse16 s[])
{
    struct cse16 temp;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(s[i].cg>s[j].cg)
                {
                    strcpy(temp.name,s[i].name);
                    temp.id=s[i].id;
                    temp.cg=s[i].cg;

                    strcpy(s[i].name,s[j].name);
                    s[i].id=s[j].id;
                    s[i].cg=s[j].cg;

                    strcpy(s[j].name,temp.name);
                    s[j].id=temp.id;
                    s[j].cg=temp.cg;
                }
                if(s[i].cg==s[j].cg)
                {
                    namesort(s);
                }
        }
    }
}

int main()
{
    struct cse16 s[5];
    input(s);
    cgsort(s);
    print(s);
    return 0;
}
