///"--------------------Bismillahir Rahmanir Rahim"-----------------------///

#include <bits/stdc++.h>
using namespace std;

///_____________________________FAST I/O__________________________________///
#define Boost()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
///-----------------------------------------------------------------------///

///_____________________________DATA TYPE_________________________________///
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
///-----------------------------------------------------------------------///

///_______________________________LOOP____________________________________///
#define rep0(i, n) for (i = 0; i < n; i++)
#define rep1(i, n) for (i = 1; i <= n; i++)
///-----------------------------------------------------------------------///

///_________________________________I/O___________________________________///
#define sf scanf
#define pf printf
///-----------------------------------------------------------------------///

///_________________________________OTHERS________________________________///
#define pb push_back
#define all(c) c.begin(), c.end()
#define MK make_pair
#define F first
#define S second
#define endl '\n'
///-----------------------------------------------------------------------///

///____________________________INITIALIZATION_____________________________///
#define mem(a, b) memset(a, b, sizeof(a))
///-----------------------------------------------------------------------///

///____________________________CALCULATE__________________________________///
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sqr(a) ((a) * (a))
///-----------------------------------------------------------------------///

///_____________________________BIT OPERATION____________________________///
inline bool checkBit(ll n, int i)
{
    return n & (1LL << i);
}
inline ll setBit(ll n, int i)
{
    return n | (1LL << i);
    ;
}
inline ll resetBit(ll n, int i)
{
    return n & (~(1LL << i));
}
///-----------------------------------------------------------------------///

///________________________String/Char Related Functions__________________///
string makeintString(int x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
string makellString(ll x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
char cpp(char c)
{
    return static_cast<char>(c + 1);
}
///-----------------------------------------------------------------------///

///__________________________Sorting STL_________________________________///
struct func
{
    //this is a sample overloading function for sorting stl
    bool operator()(pii const &a, pii const &b)
    {
        if (a.F == b.F)
            return (a.S < b.S);
        return (a.F < b.F);
    }
};
///-----------------------------------------------------------------------///

///____________________________CONSTANT___________________________________///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
///-----------------------------------------------------------------------///

struct Node
{
    int data;
    struct Node *next;
};
void printList(Node *head)
{
    cout << "List: ";
    Node *i = head;
    while (i != NULL)
    {
        cout << i->data;
        if (i->next != NULL)
            cout << "->";
        i = i->next;
    }
    cout << endl;
}
void insertAtBegining(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;

    /* new_node er next re point kortesi jekhane head_ref point kore ase 
    (head_ref point kore ase head a) so new_node er next point kortese head a */
    new_node->next = (*head_ref);

    /* ekhon head_ref re point kortesi new_node a jeta age head a point kore silo*/
    (*head_ref) = new_node;
}
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void insertAtEnd(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if ((*head_ref) == NULL)
    {
        (*head_ref) = new_node;
        return;
    }

    Node *curr = (*head_ref);
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
}
// void insertAtEnd(Node **head, int x)
// {
//     // // Your code here
//     // Node *newTail = new Node(x);
//     // newTail->next = NULL;
//     // if (head == NULL)
//     // {
//     //     head = newTail;
//     // }
//     // else
//     // {
//     //     Node *tmpHead = head;
//     //     while (tmpHead->next != NULL)
//     //     {
//     //         tmpHead = tmpHead->next;
//     //     }
//     //     tmpHead->next = newTail;
//     // }
//     // // cout<<head->data<<endl;
// }
int main()
{
    Node *head = NULL;

    bool stop = false;
    int x, choice;

    while (!stop)
    {
        cout << "----------------------------" << endl;
        cout << "0-For insert first" << endl;
        cout << "1-For insert last" << endl;
        cout << "2-For insert After" << endl;
        cout << "3-For Print List" << endl;
        cout << "4-For exit" << endl;
        cout << "----------------------------" << endl;
        cin >> choice;
        if (choice == 0)
        {
            cout << "Enter value:" << endl;
            cin >> x;
            insertAtBegining(&head, x);
            printList(head);
        }
        else if (choice == 1)
        {
            cout << "Enter value:" << endl;
            cin >> x;
            insertAtEnd(&head, x);
            printList(head);
        }
        else if (choice == 2)
        {
            cout << "Enter value for insertAfter Head:" << endl;
            cin >> x;
            insertAfter(head, x);
            printList(head);
        }
        else if (choice == 3)
        {
            printList(head);
        }

        else
        {
            stop = true;
        }
    }

    return 0;
}