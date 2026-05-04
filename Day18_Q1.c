// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array

// Example:
// Input:
// 5
// 1 2 3 4 5
// 2

// Output:
// 4 5 1 2 3
#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, k; // Declare Variables

    printf("Enter Number of Elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Your Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter The Value of K: \n");
    scanf("%d", &k);

    k = k % n; // Remove Unneassary Rotations

    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Reverse first k elements
    reverse(arr, 0, k - 1);

    // Reverse remaining n-k elements
    reverse(arr, k, n - 1);

    for (int i = 0; i < n; i++) // Display OUtput
    {
        printf("%d ", arr[i]);
    }

    return 0;
}