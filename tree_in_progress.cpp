#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node * left;
    struct node * right;
    node(int value)
    {
        cout<<"Constructor called";
    //In a tree each leaf is a node that holds a key and stores address of its left and right child.
        this->key = value;
        this->left = this->right  = NULL;
        cout<<"\nnode->key = "<<this->key;
    }
};

struct node * root = NULL; 

node* insertLevelOrder(int arr[], node* root, int i, int n) 
{ 
    // Base case for recursion 
    if (i < n) 
    { 
        node* temp = new node(arr[i]);
        root = temp; 
  
        // insert left child 
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n); 
  
        // insert right child 
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n); 
    } 
    return root; 
}

void inOrder(node* root) 
{ 
    if (root != NULL) 
    { 
        inOrder(root->left); 
        cout << root->key <<" "; 
        inOrder(root->right); 
    } 
} 



int main()
{
    int arr = [1,2,3,4,5,6,7];
    int n = sizeof(arr)/sizeof(arr[0]);
    root = struct node*;
    insertLevelOrder(arr,root,0,n);
    inOrder(root);
    return 0;

}
