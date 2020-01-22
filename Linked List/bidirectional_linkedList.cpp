#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next,*prev;

};
node *root=NULL,*tail=NULL;

void append(int data)
{
    if(root==NULL)
    {
        root=new node();
        root->data=data;
        root->next=NULL;
        tail=root;
    }
    else
    {
        node *new_node=new node();
        new_node->data=data;
        new_node->next=NULL;

        tail->next=new_node;
        tail=tail->next;
    }
}


void delete_node(int data)
{

    node *curr_node=root;

    while(curr_node->data!=data)
    {
        curr_node=curr_node->next;
    }

    if(curr_node==root)
    {
        node *temp=root;
        root=root->next;

        delete(temp);
    }
    else
    {
        curr_node->prev->next=curr_node->next;
        curr_node->next->prev=curr_node->prev;

        delete(curr_node);
    }


}


void print()
{
    node *curr_node=root;

    while(curr_node!=NULL)
    {
        printf("%d\n",curr_node->data);
        curr_node=curr_node->next;
    }
}


int main()
{
    append(1);
    append(2);
    append(3);
    print();

    delete_node(2);
     print();

    return 0;
}

