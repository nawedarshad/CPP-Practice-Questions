#include<iostream>
using namespace std;

class Stack {
public:
    int data;
    Stack *next;
    Stack(){
        this->next = NULL;
    }

    void push(int a){
        Stack *newStack = new Stack();
        newStack->data = a;
        newStack->next = NULL;
        if (this->next == NULL){
            this->next = newStack;
        } else {
            Stack *temp = next;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newStack;
        } 
    }

   void pop() {
    if (this->next == NULL) {
        cout << "Stack Underflow" << endl;
        return;
    }

    Stack *temp = this;
    if (temp->next->next == NULL) {
        delete temp->next;
        temp->next = NULL; 
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

};
void printNodes(Stack *head) {
    Stack *node = head->next;
    while (node != NULL) {
        cout << node->data << "\t";
        node = node->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    Stack l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(4);
    l1.pop();
    l1.pop();
    printNodes(&l1);
    return 0;
}
