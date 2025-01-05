/*
write a c++  program which search last occurance of perticular element from singly linear linked list

function prototype 

int SearchFirstOcc(PNODE HEAD, int no);

Input linked list :|10|->|20|->|30|->|40|->|50|->|30|->|70|

output :6
*/

#include <iostream>
using namespace std;

// Define the structure for the node of the singly linked list
struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
int SearchLastOcc(PNODE HEAD, int no);

// Function to insert a new node at the end of the linked list
void InsertLast(PNODE &head, int no) {
    PNODE newn = new NODE; // Create a new node
    newn->data = no;       // Assign data to the new node
    newn->next = NULL;     // Initialize next to NULL

    if (head == NULL) {    // Check if the list is empty
        head = newn;       // New node becomes the head
    } else {
        PNODE temp = head; // Start at the head
        while (temp->next != NULL) { // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newn; // Link the new node at the end
    }
}

// Function to search for the last occurrence of an element
int SearchLastOcc(PNODE HEAD, int no) {
    PNODE temp = HEAD; // Start at the head
    int index = -1;    // Initialize index to -1 (not found)

    int currentIndex = 0; // To keep track of the index
    while (temp != NULL) { // Traverse the linked list
        if (temp->data == no) { // Check if the current node's data matches the search value
            index = currentIndex; // Update index for the last occurrence
        }
        temp = temp->next; // Move to the next node
        currentIndex++;     // Increment index
    }

    return index; // Return the index of the last occurrence, or -1 if not found
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 10);
    InsertLast(head, 20);
    InsertLast(head, 30);
    InsertLast(head, 40);
    InsertLast(head, 50);
    InsertLast(head, 30); // Adding another 30 for last occurrence
    InsertLast(head, 70);

    int numberToSearch = 30; // Element to search for
    int result = SearchLastOcc(head, numberToSearch); // Call search function

    // Display the result
    if (result != -1) {
        cout << "Element " << numberToSearch << " found at last occurrence index: " << result << endl;
    } else {
        cout << "Element " << numberToSearch << " not found in the list." << endl;
    }

    return 0;
}