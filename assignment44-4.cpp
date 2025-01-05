/*
write a c++  program which returns largest element from singly linear linked list
function prototype 

int Addition(PNODE Head);

Input linked list :|110|->|230|->|320|->|240|

output :320
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
int FindLargest(PNODE Head);

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

// Function to find the largest element in the linked list
int FindLargest(PNODE Head) {
    if (Head == NULL) {
        cout << "The linked list is empty." << endl;
        return -1; // Return -1 to indicate the list is empty
    }

    int largest = Head->data; // Start with the first element as largest
    PNODE temp = Head->next;  // Start from the second element

    // Traverse through the linked list
    while (temp != NULL) {
        if (temp->data > largest) { // Compare and update largest
            largest = temp->data;
        }
        temp = temp->next; // Move to the next node
    }

    return largest; // Return the largest value found
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 110);
    InsertLast(head, 230);
    InsertLast(head, 320);
    InsertLast(head, 240);

    // Call the FindLargest function and display the result
    int result = FindLargest(head);
    if (result != -1) {
        cout << "The largest element in the linked list is: " << result << endl;
    }

    return 0;
}