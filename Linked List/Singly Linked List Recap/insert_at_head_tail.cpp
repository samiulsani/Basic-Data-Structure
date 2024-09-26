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

void insert_only_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val) // O(1) complexity
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size_linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *tail = d;
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    while (true)
    {
        int op;
        cout << "Enter your option" << " ";
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            insert_head_tail(head, val);
        }
        else if (op == 2)
        {
            int val;
            cin >> val;
            insert_only_head(head, val);
        }
        else if (op == 3)
        {
            int val;
            cin >> val;
            insert_tail(head, tail, val);
        }
        else if (op == 4)
        {
            cout << size_linked_list(head) << endl;
        }
        else if (op == 5)
        {
            print_linked_list(head);
        }
        else
        {
            break;
        }
    }

    cout << endl;

    return 0;
}