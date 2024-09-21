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

void insert_head_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    // Node *e = new Node(50);
    head->next = b;
    b->next = c;
    c->next = b;
    // d->next = e;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
        cout << "Cycle Detect" << endl;
    else
        cout << "Cycle Not Detect" << endl;

    return 0;
}