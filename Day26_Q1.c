// Problem: Doubly Linked List Insertion and Traversal - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the linked list elements in forward order, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Each node has data, next, prev. Insert nodes sequentially, traverse from head using next pointer.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i, x;

    // Read number of nodes
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        // Allocate memory for new node
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;
        newnode->prev = NULL;

        // If list is empty
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode; // connect next pointer
            newnode->prev = temp; // connect prev pointer
            temp = newnode;       // move temp forward
        }
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data); // print data
        temp = temp->next;         // move to next node
    }

    return 0;
}