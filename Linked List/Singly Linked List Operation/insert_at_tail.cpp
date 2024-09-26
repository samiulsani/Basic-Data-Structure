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

// Here New Node insert at tail in the list

void insert_at_tail(Node *&head, int v) // create function which isn't return anything. Just connect the node.
{
    Node *newNode = new Node(v); // we create a object as newNode
    if (head == NULL)            // if head null then the first node inserted is to be head. Everytime we do the head null.
    {
        head = newNode;
        return;
    }
    Node *temp = head;         // Here temporary variable create. Because we need to fixed the head.
    while (temp->next != NULL) // if the head next isn't null that means it's not a last node. Then we need to goto the last node.
    {
        temp = temp->next; // going to the last node
    }
    temp->next = newNode; // new node connected to the head next.
    cout << "Inserted at tail" << endl
         << endl;
}

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
        cout << "Option 3: Terminate the program:" << endl;
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
            break;
        }
    }

    return 0;
}