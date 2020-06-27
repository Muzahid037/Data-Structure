#include <bits/stdc++.h>
using namespace std;

void wordSeparate(string str)   ///void wordSeparate(const string& str)
{

    cout<<"Size Of the sentence: "<<str.size()<<endl;

    string word = "";
    for (int x=0; x<str.length(); x++)
    {
        if (str[x] == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = word + str[x];
        }
    }
    cout << word << endl;
}

int main()
{
    string str;

    getline(cin,str);

    wordSeparate(str);

    return 0;
}
