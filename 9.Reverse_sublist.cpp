#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node* ReverseSublist(Node *head, int m, int n){
    Node *node = head;
    Node *current = head;
    Node *a=nullptr , *b=nullptr;
    for (int i = 0; i <= n; i++){
        if (i == m) a=current; 
        if (i == n) b=current; 
        current =current->next; 
    }

    int temp;
    temp = a->data;
    a->data = b->data;
    b->data = temp;
    return head;
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
    Node *Reverse = ReverseSublist(head, 2, 4);
    printNodes(Reverse);
    return 0;
}
