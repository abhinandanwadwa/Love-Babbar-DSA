#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {

    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    int counter = 1;
    Node* temp = head;
    Node* newNode = new Node(data);

    while (counter != position)
    {
        if (counter == position-1) {
            break;
        }
        temp = temp->next;
        counter++;
    }

    if (temp->next == NULL) {
        // tail = newNode;
        insertAtTail(tail, data);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

}

void deleteAtPosition(Node* &head, Node* &tail, int position) {
    if (position == 1) {
        Node* prevHead = head;
        head = head->next;
        delete prevHead;
        return;
    }

    int counter = 1;
    Node* temp = head;
    while (counter < position-1)
    {
        counter++;
        temp = temp->next;
    }

    Node* toBeDeleted = temp->next;
    temp->next = temp->next->next;
    delete toBeDeleted;
}

void printLinkedList(Node* &head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
        if (temp != NULL) {
            cout << " -> ";
        }
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* node1 = new Node(15);
    Node* node2 = new Node(20);
    Node* tail = new Node(25);
    head->next = node1;
    node1->next = node2;
    node2->next = tail;

    printLinkedList(head);


    insertAtHead(head, 5);
    printLinkedList(head);

    insertAtHead(head, 0);
    printLinkedList(head);


    insertAtTail(tail, 30);
    printLinkedList(head);

    insertAtPosition(head, tail, 4, 2);
    printLinkedList(head);


    deleteAtPosition(head, tail, 1);
    printLinkedList(head);

    return 0;
}