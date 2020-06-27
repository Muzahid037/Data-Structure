#include <bits/stdc++.h>
using namespace std;

#define OUT 0
#define IN 1

// returns number of words in str
unsigned countWords(string str)
{
    int state = 0;
    unsigned wc = 0; // word count

    // Scan all characters one by one
    int i=0;
    while (i<=str.length())
    {
        // If next character is a separator, set the
        // state as 0
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
           {
           state = 0;
           }

        // If next character is not a word separator and
        // state is 0, then set the state as IN and
        // increment word count
        else if (state == 0)
        {
            state = 1;
            ++wc;
        }

        // Move to next character
        ++i;
    }

    return wc;
}

// Driver code
int main(void)
{
    string str= "One two           three four\tfive ";
    cout<<"No of words : "<<countWords(str);
    return 0;
}

