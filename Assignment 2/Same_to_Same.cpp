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

int size(Node *head)
{
    int count = 0;
    Node *flag = head;
    while (flag != NULL)
    {
        count++;
        flag = flag->next;
    }
    return count;
}

int same_to_same(Node *head1, Node *head2)
{
    int flag = 0;

    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {

        if (size(head1) != size(head2))
        {
            flag++;
            break;
        }

        if (tmp1->val != tmp2->val)
        {
            flag++;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return flag;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }

    int result = same_to_same(head1, head2);
    if (result == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}