/*
write a c++  program which display  product of all  elements  of singly 
linear linked list.
function prototype 

void Display(PNODE Head);

Input linked list :|11|->|20|->|32|->|41|

output :1 2 6 4
*/
#include <iostream>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
void Display(PNODE Head);

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

// Function to display the product of all elements in the linked list
void Display(PNODE Head) {
    long long product = 1; // Initialize the product as 1
    PNODE temp = Head;     // Start from the head

    // Traverse the linked list
    while (temp != NULL) {
        product *= temp->data; // Multiply current node's data to the product
        temp = temp->next;     // Move to the next node
    }

    // Display the product of all elements
    std::cout << "Product of all elements: " << product << std::endl;
}

int main() {
    PNODE head = NULL;

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 20);
    InsertLast(head, 32);
    InsertLast(head, 41);

    // Call the Display function to show the product of all elements
    Display(head);

    return 0;
}