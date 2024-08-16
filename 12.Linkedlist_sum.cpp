/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
*/

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};
void printNodes(Node *head) {
    Node *node = head;
    while (node != NULL) {
        cout << node->data << "\t";
        node = node->next;
    }
    cout << endl;
}

int LinkedlistSum(Node* l1, Node* l2){
    Node *node1 = l1;
    Node *node2 = l2;
    int multiplier = 10;
    int sum1=0, sum2=0;
    sum1 = node1->data;
    sum2 = node2->data;
    node1 = node1->next;
    node2 = node2->next;
    while (node1 != NULL) {
        sum1 = sum1 + (multiplier * (node1->data));
        sum2 = sum2 + (multiplier * (node2->data));
        multiplier = multiplier * 10;
        node1 = node1->next;
        node2 = node2->next;
    }
    return sum1+sum2;
}

Node* createNode(int data[], int count) {
    Node *head = new Node();
    head->data = data[0];
    head->next = NULL;
    Node *current = head;
    for (int i = 1; i < count; i++){
        Node *newNode = new Node();
        newNode->data = data[i];
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    return head;
}

int main(int argc, char const *argv[]) {
    int arr1[] = {2,4,3};
    int arr2[] = {5,6,4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    Node *l1 = createNode(arr1, size1);
    Node *l2 = createNode(arr2, size2);
    int x = LinkedlistSum(l1,l2);
    int i=0;
    int arr3[size1] = {};
    while (x>0)
    {
        arr3[i++] = x%10;
        x /= 10;
    }
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    Node *l3 = createNode(arr3, size3);
    printNodes(l3);
    return 0;
}
