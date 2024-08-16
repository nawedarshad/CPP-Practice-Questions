#ifndef STACK_H
#define STACK_H
#include<iostream>
#define max 100
class Stack{
    int topmost;
    int* arr;
    public:
    Stack(){
        arr = new int[max];
        topmost = -1;
    }

    void push(int a){
        if (topmost == max-1){
            std::cout<<"Stack Overflowed\n";
            return;
        }
        topmost++;
        arr[topmost] = a;
    }

    int pop(){
        if (topmost == -1){
            return 0;
        }
        topmost--;
        return 1;
    }

    int top(){
        if (topmost == -1){
            return -1;
        }
        return arr[topmost];
    }

    bool empty(){
        if (topmost == -1) return true;
        else return false;
    }
};

#endif