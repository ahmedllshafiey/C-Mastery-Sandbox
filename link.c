#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    unsigned int value;
    struct Node *Next; // Self-referencing struct
} Node;

// Function to create a new node
Node *createNode(unsigned int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node)); // Allocate memory
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->value = value;
    newNode->Next = NULL; // Initialize next pointer to NULL
    return newNode;
}

// Function to append a node to the linked list
void appendNode(Node **head, unsigned int value)
{
    Node *newNode = createNode(value);

    if (*head == NULL) // If list is empty, new node becomes the head
    {
        *head = newNode;
        return;
    }

    Node *temp = *head;
    while (temp->Next != NULL) // Traverse to the end of the list
    {
        temp = temp->Next;
    }

    temp->Next = newNode; // Attach the new node at the end
}

// Function to print the entire linked list
void printList(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->Next;
    }
    printf("NULL\n"); // Indicate the end of the list
}

// Function to delete a node by value
void deleteNode(Node **head, unsigned int value)
{
    if (*head == NULL) // If the list is empty
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    Node *temp = *head;
    Node *prev = NULL;

    // If the node to be deleted is the head node
    if (temp != NULL && temp->value == value)
    {
        *head = temp->Next; // Move head to the next node
        free(temp);         // Free the old head node
        printf("Node with value %d deleted.\n", value);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->value != value)
    {
        prev = temp;
        temp = temp->Next;
    }

    // If the value was not found
    if (temp == NULL)
    {
        printf("Node with value %d not found.\n", value);
        return;
    }

    prev->Next = temp->Next; // Unlink the node from the list
    free(temp);              // Free the memory
    printf("Node with value %d deleted.\n", value);
}

int main(void)
{
    Node *head = NULL; // Initialize the head of the list

    // Append nodes to the list
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);

    // Print the list
    printf("Initial list: ");
    printList(head);

    // Delete a node and print the updated list
    deleteNode(&head, 20);
    printf("List after deletion: ");
    printList(head);

    // Free the remaining nodes to avoid memory leak
    while (head != NULL)
    {
        Node *temp = head;
        head = head->Next;
        free(temp);
    }

    return 0;
}
