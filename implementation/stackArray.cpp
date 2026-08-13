#include<bits/stdc++.h>
using namespace std;


class Stack{
    
        int arr[100];
        int top;

    public:
        
        Stack(){
            top = -1;
        }

        void push(int x){
            if(x == 99){
                cout << "Stack Overflow";
                return;
            }
            arr[++top] = x;
        }

        void pop(){
            if(top == -1){
                cout << "Stack underflow";
                return;
            }
            top--;
        }

        int peek(){
            if(top == -1){
                cout << "Stack is empty";
            }
            return arr[top];
        }

        bool empty(){
            return top == -1;
        }
    
};