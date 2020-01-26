#include<bits/stdc++.h>
using namespace std;

void namesort(char a[][10])
{
    char tmp[100];
    int x;
    for(int k=0;k<3;k++){
    for(int j=0;j<2;j++)
    {
        x=strcmp(a[j],a[j+1]);
        if(x>0){strcpy(tmp,a[j]);strcpy(a[j],a[j+1]);strcpy(a[j+1],tmp);}
    }
    }
}

int main()
{
    char a[3][10];
    for(int i=0;i<3;i++)
    {
        scanf("%s",&a[i]);
    }
    namesort(a);
    for(int i=0;i<3;i++)
    {
        printf("%s ",a[i]);
    }
}
