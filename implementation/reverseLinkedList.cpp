#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* reverseList(Node* head){
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    return prev;
}

// TC : O(N)
// SC : O(1)