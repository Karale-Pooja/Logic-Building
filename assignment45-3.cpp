/*
write a c++  program which returns addition of all even element from singly 
linear linked list.
function prototype 

int DisplayPrime(PNODE Head);

Input linked list :|11|->|20|->|17|->|41|

output :52
*/
#include <iostream>
using namespace std;

// Define the structure for a node in the singly linked list
struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototype
int SumEven(PNODE Head);

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

// Function to sum all even numbers in the linked list
int SumEven(PNODE Head) {
    int sum = 0; // Initialize sum
    PNODE temp = Head; // Start from the head

    // Traverse through the linked list
    while (temp != NULL) {
        if (temp->data % 2 == 0) { // Check if the data is even
            sum += temp->data; // Add to the sum
        }
        temp = temp->next; // Move to the next node
    }

    return sum; // Return the total sum of even numbers
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 20);
    InsertLast(head, 17);
    InsertLast(head, 41);

    // Call the SumEven function to get the sum of even numbers
    int result = SumEven(head);
    cout << "The sum of even elements in the linked list: " << result << endl;

    return 0;
}