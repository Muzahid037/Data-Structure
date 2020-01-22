#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

};
node *root=NULL;

void append(int data)
{
    if(root==NULL)
    {
        root=new node();
        root->data=data;
        root->next=NULL;
    }
    else
    {
        node *curr_node=root;
        while(curr_node->next!=NULL)
        {
            curr_node=curr_node->next;
        }
        node *new_node=new node();

        new_node->data=data;
        new_node->next=NULL;

        curr_node->next=new_node;
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

void delete_node(int data)
{

    node *curr_node=root;
    node *prev_node=NULL;

    while(curr_node->data!=data)
    {
        prev_node=curr_node;
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
        curr_node=curr_node->next;
        prev_node->next=curr_node;

        delete(curr_node);
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
