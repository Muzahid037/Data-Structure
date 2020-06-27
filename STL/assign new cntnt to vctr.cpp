#include <iostream>
#include <vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main ()
{
        vector<int> first;
        vector<int> second;
        vector<int> third;

        /*for(int i=0;i<10;i++){
            first.push_back(rand()%100);
        }*/


    first.assign (7,100);    // 7 ints with a value of 100

      for(int i=0;i<first.size();i++) {
        printf("%d ",first[i]);}
        cout<<endl;

    //cout<<*first.begin()<<endl;

    //vector<int>::iterator it;
    //it=first.begin()+1;

   // cout<<"mu: "<<*it<<endl;

    second.assign (first.begin(),first.end()); // the 5 central values of first

          for(int i=0;i<second.size();i++) {
        printf("%d ",second[i]);}
        cout<<endl;

    int myints[] = {1776,7,4};
    third.assign (myints,myints+3);   // assigning from array.

     for(int i=0;i<third.size();i++) {
        printf("%d ",third[i]);}
        cout<<endl;


  cout << "Size of first: " << int (first.size()) << '\n';
  cout << "Size of second: " << int (second.size()) << '\n';
  cout << "Size of third: " << int (third.size()) << '\n';

  return 0;
  }
