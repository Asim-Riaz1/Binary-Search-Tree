#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
struct binarySearchTree
{
    Node *root;
};
void insertion(Node *&current, int value)
{
    if (current == NULL)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        current = newNode;
    }
    else if (value < current->data)
    {
        insertion(current->left, value);
    }
    else if (value > current->data)
    {
        insertion(current->right, value);
    }
    
}
void search(Node *&current, int value)
{
    if (current == NULL)
    {
        cout << "Value not found!" << endl;
    }
    else if (value == current->data)
    {
        cout << "Value found!" << endl;
    }
    else if (value < current->data)
    {
        search(current->left, value);
    }
    else if (value > current->data)
    {
        search(current->right, value);
    }
}
void inOrder(Node *&current)
{
    if (current == NULL)
    {
        return;
    }
    inOrder(current->left);
    cout << current->data << " ";
    inOrder(current->right);
}
int main()
{
    Node *current = nullptr;
    insertion(current, 5);
    insertion(current, 6);
    search(current, 6);
    inOrder(current);
}