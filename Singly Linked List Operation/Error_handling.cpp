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
    if (head == NULL) // Error handing if not head last will be head
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
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid position" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Insert any position" << " " << pos << endl
         << endl;
}

// Delete value from any position
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid position" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid position" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Deleted" << endl;
}

// Delete head
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head isn't available" << endl
             << endl;
        return;
    }
    Node *delete_head = head;
    head = head->next;
    delete delete_head;
    cout << "Deleted Head" << endl;
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
        cout << "Option 1: Insert at tail:" << endl;         // Done
        cout << "Option 2: Print the list:" << endl;         // Done
        cout << "Option 3: Insert at any position:" << endl; // Done
        cout << "Option 4: Insert at head:" << endl;         // Done
        cout << "Option 5: Delete from position:" << endl;   // Done
        cout << "Option 6: Delete Head:" << endl;            // Done
        cout << "Option 7: Terminate the program:" << endl;  // Done
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
            int pos;
            cout << "Enter your position:" << " ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}