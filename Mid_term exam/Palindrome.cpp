#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void palindrome(Node *i, Node *j)
{
    bool flag = true;

    // if (i == NULL || j == NULL)
    // {
    //     flag = true;
    // }
    // Node *left = i;
    // Node *right = j;

    while (i != NULL && j != NULL && i != j )
    {
        if (i->val != j->val)
        {
            flag = false;
        }

        i = i->next;
        j = j->prev;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    palindrome(head, tail);

    return 0;
}
