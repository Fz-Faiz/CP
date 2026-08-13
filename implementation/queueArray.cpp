#include<bits/stdc++.h>
using namespace std;


class Queue{
    int arr[100];
    int size;
    int front;
    int rear;

    public:
        Queue(){
            size == 0;
            front = 0;
            rear = -1;
        }

        void push(int x){
            if(size == 99){
                cout << "Queue overflow";
                return;
            }
            rear = (rear+1) % 100;
            arr[rear] = x;
            size++;
        }

        void pop(){
            if(size == 0){
                cout << "Queue underflow";
                return ;
            }
            front = (front+1)%100;
            size--;
        }

        int front(){
            if(size == 0){
                cout << "Queue is empty";
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            return size == 0;
        }

        





};