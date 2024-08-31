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

int search_index(Node *head, int x)
{
    int find_index = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return find_index;
        }
        tmp = tmp->next;
        find_index++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        int index=search_index(head, x);
        cout<<index<<endl;
    }
    return 0;
}