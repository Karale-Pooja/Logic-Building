/*
write a c++  program which displays all elements which are perfect from singly 
linear linked list
function prototype 

int DisplayPerfect(PNODE Head);

Input linked list :|11|->|28|->|17|->|41|->|6|->|89|

output :6 28
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
int DisplayPerfect(PNODE Head);

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

// Function to check if a number is perfect
bool IsPerfect(int num) {
    if (num <= 1) return false; // 0 and 1 are not perfect numbers

    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Sum the divisors
        }
    }
    return (sum == num); // Check if sum of divisors equals the number
}

// Function to display perfect numbers in the linked list
int DisplayPerfect(PNODE Head) {
    if (Head == NULL) {
        cout << "The linked list is empty." << endl;
        return 0; // Return 0 to indicate no perfect numbers were found
    }

    bool found = false;
    PNODE temp = Head; // Start from the head

    cout << "Perfect numbers in the linked list: ";
    // Traverse through the linked list
    while (temp != NULL) {
        if (IsPerfect(temp->data)) { // Check if the data is a perfect number
            cout << temp->data << " "; // Print the perfect number
            found = true; // Mark that we found at least one perfect number
        }
        temp = temp->next; // Move to the next node
    }

    if (!found) {
        cout << "None"; // If no perfect numbers were found
    }
    cout << endl;

    return found ? 1 : 0; // Return 1 if perfect numbers were found, otherwise return 0
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 28);
    InsertLast(head, 17);
    InsertLast(head, 41);
    InsertLast(head, 6);
    InsertLast(head, 89);

    // Call the DisplayPerfect function to show perfect numbers
    DisplayPerfect(head);

    return 0;
}