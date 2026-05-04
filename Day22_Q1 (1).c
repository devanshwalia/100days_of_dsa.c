// Problem: Count Nodes in Linked List

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

// Define structure of node
struct node
{
    int data;          // stores data
    struct node *next; // pointer to next node
};

int main()
{
    int n, i, value, count = 0;

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;

    // Take INput From User
    printf("Enter Number of Elements: \n");
    scanf("%d", &n);

    // Create linked list
    printf("Enter Data: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp; // first node
        }
        else
        {
            current->next = temp; // link previous node
        }

        current = temp;
    }

    // Count nodes
    current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    // Print count
    printf("Number of Nodes: \n");
    printf("%d\n", count);

    return 0;
}