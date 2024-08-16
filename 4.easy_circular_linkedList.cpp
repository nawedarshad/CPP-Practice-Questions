#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int data){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
bool isCircular(struct Node *head){
    if (head == NULL){
        return true;
    }
    struct Node *node = head->next;
    while (node != NULL && node != head){
        node = node->next;
    }
    if (node == head){
        return true;
    } else return false;
}
int main(int argc, char const *argv[]){
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next=head;
    if (isCircular(head)){
        cout<<"Circular";
    }
    else    cout<<"Not Circular";
    return 0;
}
