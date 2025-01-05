/*
write a c++  program which displayaddition of  element  from singly 
linear linked list.
function prototype 

int SecMaximum(PNODE Head);

Input linked list :|110|->|20|->|240|->|640|

output :2 5 2 6 10
*/
#include <iostream>

// Define the structure for a node in the singly linked list
struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
void DisplayAddition(PNODE Head);

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

// Function to display the addition of the digits of each element in the linked list
void DisplayAddition(PNODE Head) {
    PNODE temp = Head; // Start from the head

    while (temp != NULL) {
        int sum = 0;
        int number = temp->data;

        // Calculate sum of the digits of 'number'
        while (number > 0) {
            sum += number % 10; // Get the last digit
            number /= 10;        // Remove the last digit
        }

        std::cout << sum << " "; // Display the sum of digits
        temp = temp->next; // Move to the next node
    }

    std::cout << std::endl; // New line after displaying the sums
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 110);
    InsertLast(head, 20);
    InsertLast(head, 240);
    InsertLast(head, 640);

    // Call the DisplayAddition function to output digit sums
    std::cout << "The sum of digits for each element in the linked list: ";
    DisplayAddition(head);

    return 0;
}