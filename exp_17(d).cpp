// ADDING A NODE IN THE LINKED LIST

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

class node {
    public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL;
    }
};

// Function to insert a new node at the head of the list
void insertAtHead(node*& head, int value) {
    node* newNode = new node(value); // Fixed variable name
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->value << " -> "; // Print the value of the current node
        temp = temp->next;
    }
    cout << "NULL" << endl; // Print NULL to mark the end of the list
}

int main() {

    node* head = NULL; // Initialize head to null

    insertAtHead(head, 4); // Insert 4 at the head
    display(head); // Display the list

    insertAtHead(head, 5); // Insert 5 at the head
    display(head); // Display the list again

    insertAtHead(head, 10); // Insert 10 at the head
    display(head); // Display the list again
}