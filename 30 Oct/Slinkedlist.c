#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;  // Head pointer for the list

// Function to insert a node at the beginning
void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;   // Point to the old first node
    head = newNode;         // Move head to point to new node
    printf("%d inserted at beginning.\n", value);
}

// Function to display the linked list
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to count even and odd values
void countEvenOdd() {
    int even = 0, odd = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data % 2 == 0)
            even++;
        else
            odd++;
        temp = temp->next;
    }

    printf("Even count = %d, Odd count = %d\n", even, odd);
}

// Function to delete node from a given position
void deleteFromPosition(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;

    // If deleting the first node
    if (pos == 1) {
        head = temp->next;
        free(temp);
        printf("Node deleted from position 1.\n");
        return;
    }

    struct Node* prev = NULL;
    for (int i = 1; temp != NULL && i < pos; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If position doesn't exist
    if (temp == NULL) {
        printf("Position not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node deleted from position %d.\n", pos);
}

// Main function
int main() {
    int choice, value, pos;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display\n");
        printf("3. Count Even/Odd\n");
        printf("4. Delete from Position\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;

            case 2:
                display();
                break;

            case 3:
                countEvenOdd();
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteFromPosition(pos);
                break;

            case 5:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

