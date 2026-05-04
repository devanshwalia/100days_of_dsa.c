// Problem: Create and Traverse Singly Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50
#include <stdio.h>
#include <stdlib.h>

// Define structure for node
struct node
{
    int data;          // Stores data
    struct node *next; // Pointer to next node
};

int main()
{
    int n, i, value;

    struct node *head = NULL;    // First node
    struct node *temp = NULL;    // Used to create new node
    struct node *current = NULL; // Used for traversal

    // Read number of nodes
    printf("Enter number of nodes: \n");
    scanf("%d", &n);

    // Create linked list
    printf("Enter Data: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        // Allocate memory for new node
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->next = NULL;

        // If list is empty
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            current->next = temp; // Link previous node to new node
        }

        current = temp; // Move current to new node
    }

    // Traverse and print the linked list
    printf("Linked List: \n");
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}