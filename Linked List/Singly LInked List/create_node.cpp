#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;
    a.val = 20;
    b.val = 30;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;

    return 0;
}