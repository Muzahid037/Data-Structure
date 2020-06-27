#include<bits/stdc++.h>
using namespace std;
int main()
{
    {
    ofstream of("MyLog.txt");
    of<<"Experience is the mother of wisdom"<<endl;
    of<<234<<endl;
    of<<2.3<<endl;

    of<<bitset<8>(14)<<endl;
    of << complex<int>(2,3)<<endl;
    }
    {
        ofstream of("MyLog.txt",ofstream::app);
        of<<"Honesty is the best policy"<<endl;
    }
    {
        ofstream of("MyLog.txt",ofstream::in | ofstream::out);
        of.seekp(10,ios::beg);
        of<<"12345";
        of.seekp(-5,ios::end);
        of<<"Nothing vdentured,nothing gained"<<endl;
        of.seekp(-5,ios::cur);
    }
    ifstream inf("MyLog.txt");
    int i;
    inf>>i;
}
