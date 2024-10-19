# Experiment-17
AIM : To study and implement Linked List (data structure) of three types i-e Singly,doubly and circular in C++ programming language 

# Linked List 
A Linked List is a data structure in C++ that consists of a sequence of nodes, where each node contains two elements:

1. Data: The value stored in the node.
2. Pointer: A reference to the next node in the list.
   
Unlike arrays, linked lists don't have fixed sizes and can grow or shrink dynamically. Each element (or node) in a linked list is linked using pointers, allowing efficient insertions or deletions from any position.

types of linked list :
There are several types of linked lists, each with different structures and features. Here are the main types:

### 1. **Singly Linked List**
   - **Structure:** Each node contains data and a reference (or link) to the next node in the sequence.
   - **Features:**
     - Only forward traversal is possible.
     - Simple and easy to implement.
   - **Use Cases:** Implementing stacks, queues, and simple dynamic data structures.
   
   ```
   Head -> Node1 -> Node2 -> Node3 -> Null
   ```

### 2. **Doubly Linked List**
   - **Structure:** Each node contains data, a reference to the next node, and a reference to the previous node.
   - **Features:**
     - Allows traversal in both directions (forward and backward).
     - More complex than a singly linked list due to extra pointers.
   - **Use Cases:** Implementing complex data structures like dequeues or when you need bi-directional traversal.
   
   ```
   Null <- Node1 <-> Node2 <-> Node3 -> Null
   ```

### 3. **Circular Linked List**
   - **Structure:** Similar to a singly linked list, but the last node points back to the first node, forming a circular structure.
   - **Features:**
     - Can be traversed endlessly in a loop.
     - Typically used in situations where the cycle of elements is essential.
   - **Use Cases:** Implementing a circular queue, round-robin scheduling, or buffering systems.
   
   ```
   Head -> Node1 -> Node2 -> Node3 -> Head
   ```
Each of these types serves different purposes based on the needs of your application, such as ease of traversal, memory efficiency, or circular traversal requirements.

# CODE PERFORMED IN LAB :
Experiment 17(a)
```
// program to implement Singly Linked list in C++ using class

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
    /*void disp(){
        cout<<data<<"   "<<next;
    }*/
};

int main(){
    Link* l1 = new Link(6);
    cout<<l1->data<<"   "<<l1->next;
    //l1.disp();
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/15be3ef7-afbf-4ead-b304-0860418d6902)

CODE : Experiment 17(b)
```
// Add a new node at start 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
};
void insert_head(Link* &head, int data){
    Link* new_node=new Link(data);
    new_node->next = head;
    head = new_node;
}
void disp(Link* head){
    Link* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Link* head = NULL;
    insert_head(head, 30);
    disp(head);
    insert_head(head, 32);
    disp(head);
    insert_head(head, 35);
    disp(head);
    //l1.disp();
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/3bbe4cc2-ef6d-4ae5-80f0-4ba2968d50c9)

# Code implemented during Workshop :
CODE (a) 
```
// linked list --> linear data structure used to stores list of values

// creating a linked list

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

int main() {
    node* a = new node(1);
    cout << a->value << " " << a->next << endl;  // Prints value and next (which is NULL)
}
```
OUTPUT :

![image](https://github.com/user-attachments/assets/d998f3a2-508a-4ee8-95b2-7a3045e6fd52)

CODE (b) :
```
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
```

OUTPUT : ![image](https://github.com/user-attachments/assets/7b3855f6-1c1f-4842-a33e-7fe933cde4b1)

CODE (C) :
```
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
```
OUTPUT :
![image](https://github.com/user-attachments/assets/5c9e61df-ecd5-4a9f-999b-483f8d7f2183)

CODE FOR CIRCULAR LINKED LIST :
```
// CODE WHICH EXPLAINS CIRCULAR LINKED LIST 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Method to insert a new node at the end of the list
    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Method to display the list
    void display() {
        if (!head) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        Node* current = head;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << "(head)" << std::endl;
    }

    // Method to delete a node with a given value
    void deleteNode(int key) {
        if (!head) {
            std::cout << "List is empty" << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        do {
            if (current->data == key) {
                if (prev) {
                    prev->next = current->next;
                } else { // Deleting the head
                    if (current->next == head) { // Only one node
                        delete head;
                        head = nullptr;
                        return;
                    } else {
                        Node* temp = head;
                        while (temp->next != head) {
                            temp = temp->next;
                        }
                        temp->next = current->next;
                        head = current->next;
                    }
                }
                delete current;
                std::cout << "Node with data " << key << " deleted" << std::endl;
                return;
            }
            prev = current;
            current = current->next;
        } while (current != head);
        
        std::cout << "Node with data " << key << " not found" << std::endl;
    }

    ~CircularLinkedList() {
        if (!head) return;

        Node* current = head;
        Node* nextNode;

        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

// Example usage
int main() {
    CircularLinkedList cll;
    cll.insert(10);
    cll.insert(20);
    cll.insert(30);

    std::cout << "Circular Linked List:" << std::endl;
    cll.display();

    cll.deleteNode(20);
    std::cout << "After deleting 20:" << std::endl;
    cll.display();

    cll.deleteNode(40); // Attempting to delete a non-existing node

    return 0;
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/c2cec62e-4660-441e-9b83-5ed35f8b8c82)

CONCLUSION :
We have learned and implemented linked list and its types i-e Singly , doubly and circular linked list in C++. 








