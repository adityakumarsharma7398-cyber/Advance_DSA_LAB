#include<bits/stdc++.h>
using namespace std;
class Node {
public: 
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
void push(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
int pop(Node* &head) {
    if (head == nullptr) {
        cout << "Stack is empty!" << endl;
        return -1; // or throw an exception
    }
    Node* temp = head;
    int poppedValue = head->data;
    head = head->next;
    delete temp;
    return poppedValue;
}
int main() {
    Node* head = nullptr;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    cout << "Top element: " << head->data << endl;
    cout << "Popped element: " << pop(head) << endl;
    cout << "New top element: " << head->data << endl;
    return 0;
}