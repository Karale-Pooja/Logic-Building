/*
write a c++  program which returns addition of all element from singly linear linked list
function prototype 

int Addition(PNODE Head);

Input linked list :|10|->|20|->|30|->|40|

output :100
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
int Addition(PNODE Head);

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

// Function to calculate the addition of all elements in the linked list
int Addition(PNODE Head) {
    int sum = 0; // Initialize sum to zero
    PNODE temp = Head; // Start at the head

    // Traverse the linked list and add each node's data to sum
    while (temp != NULL) {
        sum += temp->data; // Add current node's data to sum
        temp = temp->next;  // Move to the next node
    }

    return sum; // Return the total sum
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 10);
    InsertLast(head, 20);
    InsertLast(head, 30);
    InsertLast(head, 40);

    // Call the Addition function and display the result
    int result = Addition(head);
    cout << "The addition of all elements in the linked list is: " << result << endl;

    return 0;
}