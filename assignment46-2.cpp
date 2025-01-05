/*
write a c++  program which display all epalindrome elements  of singly 
linear linked list.
function prototype 

void Display(PNODE Head);

Input linked list :|11|->|28|->|17|->|441|->|6|->|89|

output :11 6 414
*/
#include <iostream>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

// Function prototypes
void Display(PNODE Head);
bool isPalindrome(int num);

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

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check if original number is equal to its reverse
    return original == reversed;
}

// Function to display the palindrome elements in the linked list
void Display(PNODE Head) {
    PNODE temp = Head;  // Start from the head
    bool foundPalindrome = false;

    // Traverse the linked list
    while (temp != NULL) {
        if (isPalindrome(temp->data)) { // Check if the current element is a palindrome
            std::cout << temp->data << " "; // Print the palindromic element
            foundPalindrome = true;
        }
        temp = temp->next; // Move to the next node
    }

    if (!foundPalindrome) {
        std::cout << "No palindrome elements found." << std::endl; // In case no palindrome is found
    } else {
        std::cout << std::endl; // For better output format
    }
}

int main() {
    PNODE head = NULL;

    // Inserting elements into the linked list
    InsertLast(head, 11);
    InsertLast(head, 28);
    InsertLast(head, 17);
    InsertLast(head, 441);
    InsertLast(head, 6);
    InsertLast(head, 89);

    // Call the Display function to show palindrome elements
    std::cout << "Palindrome elements in the linked list: ";
    Display(head);

    return 0;
}