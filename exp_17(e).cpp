// adding a node at the end of the linked list

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* next;

    node(int data) {
        value = data;
        next = nullptr;
    }
};

// Function to insert a new node at the tail of the list 
void insertAtTail(node*& head, int value) {
    node* newNode = new node(value);
    if (head == nullptr) {
        head = newNode; // Set the head to the new node
        return;
    }

    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode; // Link the new node at the end
}

// Function to insert a new node at the head of the list 
void insertAtHead(node*& head, int value) {
    node* newNode = new node(value);
    newNode->next = head; // Link the new node to the current head
    head = newNode; // Update head to be the new node
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " -> "; // Print the value of the current node
        temp = temp->next;
    }
    cout << "NULL" << endl; // Print NULL to mark the end of the list
}

int main() {
    node* head = nullptr; // Initialize head to null

    insertAtHead(head, 4); // Insert 4 at the head
    display(head); // Display the list

    insertAtHead(head, 5); // Insert 5 at the head
    display(head); // Display the list again

    insertAtHead(head, 10); // Insert 10 at the head
    display(head); // Display the list again

    // Insert nodes at the tail
    insertAtTail(head, 20); // Insert 20 at the tail
    display(head); // Display the list

    insertAtTail(head, 30); // Insert 30 at the tail
    display(head); // Display the list

    return 0;
}