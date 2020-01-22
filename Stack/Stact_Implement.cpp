#include<bits/stdc++.h>
using namespace std;

int top_pointer=-1;
int stk[10000];

void push(int new_element)
{
    top_pointer++;
    stk[top_pointer]=new_element;

}
int pop()
{
    int last_element=stk[top_pointer];
    top_pointer--;
    return last_element;
}

int peek()
{
    return stk[top_pointer];
}
bool is_emppty()
{
    if(top_pointer==-1)
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<is_emppty()<<endl;


    return 0;
}

/*

class Stack:
    def __init__(self, max_size): #initialize a stack of max_size
        self.top_pointer = -1 #Keep track of top element using this
        self.stack = [None for x in range(max_size)]  #create a list of max_size

    def push(self, new_element):
        self.top_pointer = self.top_pointer + 1 #Move the pointer
        self.stack[self.top_pointer] = new_element #Add the new_element to the top

    def pop(self):
        last_element = self.stack[self.top_pointer]
        self.top_pointer = self.top_pointer - 1 #Move the pointer
        return last_element #Pop the last element

    def peek(self):
        return self.stack[self.top_pointer]

    def is_empty(self):
        return top.pointer == -1

*/
