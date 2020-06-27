#include<bits/stdc++.h>
using namespace std;

int covertToIntValue(string date)
{
    string d="";
    string m="";
    string y="";

    int cnt=0;
    for(int i=0;i<date.size();i++)
    {
        if(date[i]=='/')
        {
            cnt++;
        }
        if(cnt==0 && date[i]!='/')
        {
            d+=date[i];
        }
        else if(cnt==1  && date[i]!='/')
        {
            m+=date[i];
        }
        else if(cnt==2 && date[i]!='/')
        {
            y+=date[i];
        }

    }
  stringstream p(d);
  int day = 0;
  p >> day;

 stringstream q(m);
  int month = 0;
  q >> month;

    stringstream r(y);
  int year = 0;
  r >> year;

 cout<<"Day: "<<day<<'\n';
 cout<<"Month: "<<month<<'\n';
 cout<<"Year: "<<year<<'\n';

}

int main()
{
    string date;
    cin>>date;
    //cout<<date<<endl;

    covertToIntValue(date);

    return 0;
}
