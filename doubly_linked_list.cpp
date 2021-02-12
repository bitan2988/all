#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//DOUBLY LINKED LIST
class node{
    public:
        int data;
        node* next;
        node* prev;
        node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

void append(node* &head, node* &tail, int val){
    node* new_node = new node(val);
    if(head==NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        tail = new_node;
    }
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
}

void print_rev(node* tail){
    node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"<--";
        temp = temp->prev;
    }
}

node* reverse(node* head){
    node* temp = NULL;
    node* curr = head;
    while (curr != NULL) 
    { 
        temp = curr->prev; 
        curr->prev = curr->next; 
        curr->next = temp;             
        curr = curr->prev; 
    }
    return temp->prev;
}

//Given a sorted doubly linked list of positive distinct elements, 
//the task is to find pairs in doubly linked list whose sum is equal to given value x, 
//without using any extra space ? 
//USING TWO POINTER METHOD
bool two_sum(node* head, node* tail, int k){
    node* left = head;   //LEFT POINTER ON STARTING
    node* right = tail;  //RIGHT POINTER ON END
    while(left!=NULL and right!=NULL and left!=right and right->next!=left){     //WHEN LEFT WILL CROSS RIGHT THEN LEFT WILL BECOME NEXT OF RIGHT
        if((left->data+right->data)==k){
            cout<<left->data<<" ";
            cout<<right->data;
            return true;
        }
        else if((left->data+right->data)<=k){    //MOVE LEFT FORWARD
            left = left->next;
        }
        else{
            right = right->prev;   //MOVE RIGHT BECKWARDS
        }
    }
    cout<<"NO PAIR FOUND";
    return false;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    for(int i=0;i<10;i++){
        append(head, tail, i);
    }
    print(head);
    cout<<endl;
    //cout<<tail->data;
    //print(reverse(head));
    two_sum(head, tail, 8);
}