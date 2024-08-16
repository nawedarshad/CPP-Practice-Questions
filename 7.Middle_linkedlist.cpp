#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};
Node middleNode(Node *head){
    Node *middle = head;
    Node *node = head;
    while (node != NULL)
    {
        if (node->next == NULL){
        node = node->next;
        } else if(node->next->next != NULL){
        node = node->next->next;
        middle = middle->next;
        } else if (node->next->next == NULL){
        node = node->next->next;
        middle = middle->next;
        }
    }
    return *middle;
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
    Node middle = middleNode(head);
    cout<<"Middle: "<<middle.data;
    return 0;
}
