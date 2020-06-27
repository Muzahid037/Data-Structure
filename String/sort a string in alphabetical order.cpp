#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    char a[5][10],tmp[10];
    for(int i=0; i<5; i++)
    {
        scanf("%s",&a[i]);
    }

    for(int j=0; j<5; j++)
    {
        for(int k=0; k<4-j; k++)
        {
            x=strcmp(a[k],a[k+1]);
            if(x>0)
            {
                strcpy(tmp,a[k]);
                strcpy(a[k],a[k+1]);
                strcpy(a[k+1],tmp);
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%s ",a[i]);
    }

}
