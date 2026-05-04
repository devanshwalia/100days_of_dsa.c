// Insert an Element in an Array

// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (the array)
// - Third line: integer pos (1-based position)
// - Fourth line: integer x (element to insert)

// Output:
// - Print the updated array (n+1 integers) in a single line, space-separated

// Example:
// Input:
// 5
// 1 2 4 5 6
// 3
// 3

// Output:
// 1 2 3 4 5 6

// Explanation: Insert 3 at position 3, elements [4,5,6] shift right

#include <stdio.h>
int main()
{
    int n, pos, x; // Declare Variables

    scanf("%d", &n);            // Take Input From User
    int arr[n];                 // Declare Array
    for (int i = 0; i < n; i++) // Input Elements of array
        scanf("%d", &arr[i]);

    scanf("%d", &pos); // Ask The Position and element
    scanf("%d", &x);

    for (int i = n; i >= pos; i--) // Shift Elements after given position to right
        arr[i] = arr[i - 1];

    arr[pos - 1] = x; // Insert the given element at the given position

    for (int i = 0; i <= n; i++) // Print the new array
        printf("%d ", arr[i]);

    return 0;
}
