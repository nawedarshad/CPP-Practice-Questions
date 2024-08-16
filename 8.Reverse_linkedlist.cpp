#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node* ReverseNode(Node *head){
    Node *node = head;
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;  
    }
    return prev;
}
void printNodes(Node *head) {
    Node *node = head;
    while (node != NULL) {
        cout << node->data << "\t";
        node = node->next;
    }
    cout << endl;
}

Node* createNode(int data, Node *next) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = next;
    return newNode;
}

int main(int argc, char const *argv[]) {
    Node *seven = createNode(8, NULL);
    Node *six = createNode(65, seven);
    Node *five = createNode(48, six);
    Node *four = createNode(5, five);
    Node *three = createNode(4, four);
    Node *two = createNode(54, three);
    Node *head = createNode(13, two);
    
    printNodes(head);
    Node *Reverse = ReverseNode(head);
    printNodes(Reverse);
    return 0;
}
