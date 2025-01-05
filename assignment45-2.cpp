/*
write a c++  program which displays all elements which are prime from singly 
linear linked list
function prototype 

int DisplayPrime(PNODE Head);

Input linked list :|11|->|20|->|17|->|41|->|22|->|89|

output :11 17 41 89
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
int DisplayPrime(PNODE Head);

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

// Function to check if a number is prime
bool IsPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) { // Check for factors up to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible, not prime
        }
    }
    return true; // If no factors found, it's prime
}

// Function to display prime numbers in the linked list
int DisplayPrime(PNODE Head) {
    if (Head == NULL) {
        cout << "The linked list is empty." << endl;
        return 0; // Return 0 to indicate no primes found
    }

    bool found = false;
    PNODE temp = Head; // Start from the head

    cout << "Prime numbers in the linked list: ";
    // Traverse through the linked list
    while (temp != NULL) {
        if (IsPrime(temp->data)) { // Check if the data is a prime number
            cout << temp->data << " "; // Print the prime number
            found = true; // Mark that we found at least one prime number
        }
        temp = temp->next; // Move to the next node
    }

    if (!found) {
        cout << "None"; // If no prime numbers were found
    }
    cout << endl;

    return found ? 1 : 0; // Return 1 if primes were found, otherwise return 0
}

int main() {
    PNODE head = NULL; // Initialize head of the linked list

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 20);
    InsertLast(head, 17);
    InsertLast(head, 41);
    InsertLast(head, 22);
    InsertLast(head, 89);

    // Call the DisplayPrime function to show prime numbers
    DisplayPrime(head);

    return 0;
}