/*
write a c++  program which reverse each element  from singly 
linear linked list.
function prototype 

void reverse(PNODE Head);

Input linked list :|11|->|28|->|17|->|41|->|6|->|89|

output :|11|->|82|->|71|->|14|->|6|->|98|
*/
#include <iostream>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
void reverse(PNODE Head);

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

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10; // Build reversed number
        num /= 10; // Remove last digit
    }
    return reversed;
}

// Function to reverse each element in the linked list
void reverse(PNODE Head) {
    PNODE temp = Head; // Start from the head
    while (temp != NULL) {
        // Reverse the number stored in the node and update it
        temp->data = reverseNumber(temp->data);
        temp = temp->next; // Move to the next node
    }
}

// Function to display the linked list
void DisplayList(PNODE Head) {
    PNODE temp = Head;
    std::cout << "|";
    while (temp != NULL) {
        std::cout << temp->data;
        temp = temp->next;
        if (temp != NULL) {
            std::cout << "|->|";
        }
    }
    std::cout << "|" << std::endl;
}

int main() {
    PNODE head = NULL;

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 28);
    InsertLast(head, 17);
    InsertLast(head, 41);
    InsertLast(head, 6);
    InsertLast(head, 89);

    std::cout << "Original linked list: ";
    DisplayList(head);

    // Call the reverse function to reverse digits in each element
    reverse(head);

    std::cout << "Linked list after reversing each element: ";
    DisplayList(head);

    return 0;
}