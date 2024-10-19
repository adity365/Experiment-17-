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