/*
write a c++  program which search first occurance of perticular element from singly linear linked list

function prototype 

int SearchFirstOcc(PNODE HEAD, int no);

Input linked list :|10|->|20|->|30|->|40|->|50|->|60|->|70|

output :3
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
int SearchFirstOcc(PNODE HEAD, int no);

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

// Function to search for the first occurrence of an element
int SearchFirstOcc(PNODE HEAD, int no) {
    PNODE temp = HEAD; // Start at the head
    int index = 0;     // Initialize index

    while (temp != NULL) { // Traverse the linked list
        if (temp->data == no) { // Check if the current node's data matches the search value
            return index;        // Return the index of the first occurrence
        }
        temp = temp->next; // Move to the next node
        index++;           // Increment index
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 10);
    InsertLast(head, 20);
    InsertLast(head, 30);
    InsertLast(head, 40);
    InsertLast(head, 50);
    InsertLast(head, 60);
    InsertLast(head, 70);

    int numberToSearch = 30; // Element to search for
    int result = SearchFirstOcc(head, numberToSearch); // Call search function

    // Display the result
    if (result != -1) {
        cout << "Element " << numberToSearch << " found at index: " << result << endl;
    } else {
        cout << "Element " << numberToSearch << " not found in the list." << endl;
    }

    return 0;
}