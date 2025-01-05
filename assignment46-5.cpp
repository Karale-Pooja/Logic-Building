/*
write a c++  program which display  largest digits of all  elements  of singly 
linear linked list.
function prototype 

void Display(PNODE Head);

Input linked list :|11|->|250|->|532|->|441|

output :1 5  5 9
*/
#include <iostream>
#include <climits>

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

    if (head == NULL) {      // If the list is empty
        head = newn;         // New node becomes the head
    } else {
        PNODE temp = head;
        while (temp->next != NULL) { // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newn;   // Link the new node at the end
    }
}

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = -1; // Initialize with a value lower than any digit

    while (num > 0) {
        int digit = num % 10; // Get the last digit
        if (digit > largest) {
            largest = digit; // Update largest digit
        }
        num /= 10; // Remove the last digit
    }

    return largest; // Return the largest digit found
}

// Function to display the largest digits of all elements in the linked list
void Display(PNODE Head) {
    PNODE temp = Head; // Start from the head
    while (temp != NULL) {
        int largestDigit = findLargestDigit(temp->data); // Find largest digit of current node
        std::cout << largestDigit << " "; // Output the largest digit
        temp = temp->next; // Move to the next node
    }
    std::cout << std::endl; // For better output format
}

int main() {
    PNODE head = NULL;

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 250);
    InsertLast(head, 532);
    InsertLast(head, 441);

    // Call the Display function to show the largest digits
    std::cout << "Largest digits of all elements: ";
    Display(head);

    return 0;
}