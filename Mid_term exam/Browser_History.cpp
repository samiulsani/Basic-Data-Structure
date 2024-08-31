#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string url;
    Node *next;
    Node *prev;
    Node(string url)
    {
        this->url = url;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string url)
{
    Node *newNode = new Node(url);
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

bool check_address(Node *head, string value)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->url == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void go_next(Node *&current)
{
    if (current->next != NULL)
    {
        current = current->next;
        cout << current->url << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void go_prev(Node *&current)
{
    if (current->prev != NULL)
    {
        current = current->prev;
        cout << current->url << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string url;
        cin >> url;
        if (url == "end")
        {
            break;
        }
        insert_tail(head, tail, url);
    }

    int q;
    cin >> q;

    Node *current = head;

    for (int i = 0; i < q; i++)
    {

        string command;
        cin >> command;
        if (command == "visit")
        {
            string url;
            cin >> url;
            if (check_address(head, url))
            {
                Node *temp = head;
                while (temp->url != url)
                {
                    temp = temp->next;
                }
                current = temp;
                cout << current->url << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            go_next(current);
        }
        else if (command == "prev")
        {
            go_prev(current);
        }
    }

    return 0;
}
