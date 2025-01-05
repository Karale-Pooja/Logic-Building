/*
write a c++  program which return second maximum element  from singly 
linear linked list.
function prototype 

int SecMaximum(PNODE Head);

Input linked list :|110|->|230|->|320|->|240|

output :240
*/

#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

// Define the structure for a node in the singly linked list
struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
int SecMaximum(PNODE Head);

// Function to insert a new node at the end of the linked list
void InsertLast(PNODE &head, int no) {
    PNODE newn = new NODE;   // Create a new node
    newn->data = no;         // Assign data to the new node
    newn->next = NULL;       // Initialize the next pointer to NULL

    if (head == NULL) {      // Check if the list is empty
        head = newn;         // New node becomes the head
    } else {
        PNODE temp = head;   // Start at the head
        while (temp->next != NULL) { // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newn;   // Link the new node at the end
    }
}

// Function to find the second maximum element in the linked list
int SecMaximum(PNODE Head) {
    if (Head == NULL) {
        cout << "The linked list is empty." << endl;
        return INT_MIN; // Return some indicative value for an empty list
    }

    int max1 = INT_MIN; // Initialize first maximum
    int max2 = INT_MIN; // Initialize second maximum

    PNODE temp = Head; // Start from the head

    // Traverse through the linked list to find max1 and max2
    while (temp != NULL) {
        if (temp->data > max1) {
            max2 = max1;    // Update second maximum
            max1 = temp->data; // Update first maximum
        } else if (temp->data > max2 && temp->data < max1) {
            max2 = temp->data; // Update second maximum
        }
        temp = temp->next; // Move to the next node
    }

    if (max2 == INT_MIN) {
        cout << "There is no second maximum element." << endl;
        return INT_MIN; // Return an indicative value (no second max)
    }

    return max2; // Return the second maximum element
}

