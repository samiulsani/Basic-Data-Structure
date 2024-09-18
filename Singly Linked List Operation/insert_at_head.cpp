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

// Insert the value at the head. For insert head always need head as a reference.
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl
         << endl;
}

// Insert the value on last at tail
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted at tail" << endl
         << endl;
}

// Insert the value at any position where users want.
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Insert any position" << " " << pos << endl
         << endl;
}

// Print the full linked list
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List:-" << " ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert at tail:" << endl;
        cout << "Option 2: Print the list:" << endl;
        cout << "Option 3: Insert at any position:" << endl;
        cout << "Option 4: Insert at head:" << endl;
        cout << "Option 5: Terminate the program:" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int n;
            cin >> n;
            insert_at_tail(head, n);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter position" << endl;
            cin >> pos;
            cout << "Enter your value" << endl;
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter value" << endl;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}