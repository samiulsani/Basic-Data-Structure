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
    tail = newNode;
}

void remove_dup(Node *&head, Node *&tail, int val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *check = tmp;
        while (check->next != NULL)
        {
            if (check->next->val == tmp->val)
            {
                Node *temp = check->next;
                check->next = check->next->next;
                delete temp;
            }
            else
            {
                check = check->next;
            }
        }
        tmp = tmp->next;
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    remove_dup(head, tail, val);
    print_list(head);
    return 0;
}