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