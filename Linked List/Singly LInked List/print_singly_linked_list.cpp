#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    Node *temp = head; // Main head won't use. we use head address to a temporary variable.

    while (temp != NULL) // when temp find NULL that will stop the loop.
    {
        cout << temp->val << endl; // temp next value print
        temp = temp->next;         // next node will be new head.
    }

    return 0;
}