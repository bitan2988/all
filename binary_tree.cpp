#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data = val;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    struct node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    cout<<"root = "<<root->data<<"            left = "<<root->left->data<<"          right = "<<root->right->data;
    return 0;
}