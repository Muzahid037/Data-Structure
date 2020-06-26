#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mymap;

    int arrSize;
    cin>>arrSize;

    int input[arrSize+5],compressed[arrSize+5];

    for (int i = 0; i < arrSize; i++) cin>>input[i];

    int assignNewValue = 0, c = 0;

    for (int i = 0; i < arrSize; i++)
    {
        int x = input[i];
        if (mymap.find(x) == mymap.end())   //x not yet compressed
        {
            mymap[x] = assignNewValue;
            printf("Mapping %d with %d\n", x, assignNewValue);
            assignNewValue++;
        }
       // x = mymap[x];
        compressed[c++] = mymap[x];
    }
    printf("Compressed array: ");
    for (int i = 0; i < arrSize; i++) printf("%d ", compressed[i]);
    puts("");
}
