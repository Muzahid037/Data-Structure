#include <bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> v;
	v.push_back(6);
	v.push_back(9);
	v.push_back(12);   //{ 4, 7, 5, 2, 6, 9 };
	int key = 9;

	if(count(v.begin(), v.end(), key))
            cout<<"Founded";                 ///return 1(true)  or   0(false)
	else
    {cout << "Element not found";}

	return 0;
}
