#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1)
        {
            current->left = new Node(leftVal);
            q.push(current->left);
        }
        if (rightVal != -1)
        {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }
    return root;
}

void print_level(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    int current_level = 0;

    while (!q.empty())
    {
        int level_size = q.size();

        if (current_level == level)
        {
            for (int i = 0; i < level_size; i++)
            {
                Node *current = q.front();
                q.pop();
                cout << current->val << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < level_size; i++)
        {
            Node *current = q.front();
            q.pop();
            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }

        current_level++;
    }

    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    print_level(root, level);
    return 0;
}
