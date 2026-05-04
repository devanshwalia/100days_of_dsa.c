// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head1 = NULL, *head2 = NULL, *merge = NULL, *temp, *newnode, *tail;
    int n, m, x, i;

    scanf("%d", &n); // number of elements in first list

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x); // read element

        // allocate memory for new node
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;

        // if list is empty
        if (head1 == NULL)
        {
            head1 = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode; // attach node at end
            temp = newnode;
        }
    }

    scanf("%d", &m); // number of elements in second list

    for (i = 0; i < m; i++)
    {
        scanf("%d", &x);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;

        if (head2 == NULL)
        {
            head2 = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // compare elements of both lists
    while (head1 != NULL && head2 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if (head1->data < head2->data)
        {
            newnode->data = head1->data; // take node from first list
            head1 = head1->next;
        }
        else
        {
            newnode->data = head2->data; // take node from second list
            head2 = head2->next;
        }

        newnode->next = NULL;

        // if merged list is empty
        if (merge == NULL)
        {
            merge = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode; // attach node
            tail = newnode;
        }
    }

    while (head1 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = head1->data;
        newnode->next = NULL;

        tail->next = newnode;
        tail = newnode;

        head1 = head1->next;
    }

    while (head2 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = head2->data;
        newnode->next = NULL;

        tail->next = newnode;
        tail = newnode;

        head2 = head2->next;
    }

    temp = merge;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}