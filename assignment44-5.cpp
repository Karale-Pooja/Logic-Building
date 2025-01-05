/*
write a c++  program which returns smallest element from singly linear linked list
function prototype 

int Addition(PNODE Head);

Input linked list :|110|->|20|->|320|->|240|

output :20
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
int FindSmallest(PNODE Head);

// Function to insert a new node at the end of the linked list
void InsertLast(PNODE &head, int no) {
    PNODE newn = new NODE; // Create a new node
    newn->data = no;       // Assign data to the new node
    newn->next = NULL;     // Initialize the next pointer to NULL

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

// Function to find the smallest element in the linked list
int FindSmallest(PNODE Head) {
    if (Head == NULL) {
        cout << "The linked list is empty." << endl;
        return -1; // Return -1 to indicate the list is empty
    }

    int smallest = Head->data; // Start with the first element as smallest
    PNODE temp = Head->next;   // Start from the second element

    // Traverse through the linked list
    while (temp != NULL) {
        if (temp->data < smallest) { // Compare and update smallest
            smallest = temp->data;
        }
        temp = temp->next; // Move to the next node
    }

    return smallest; // Return the smallest value found
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 110);
    InsertLast(head, 20);
    InsertLast(head, 320);
    InsertLast(head, 240);

    // Call the FindSmallest function and display the result
    int result = FindSmallest(head);
    if (result != -1) {
        cout << "The smallest element in the linked list is: " << result << endl;
    }

    return 0;
}