// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.
#include <stdio.h>

int main()
{
    int n;

    // Take Input From User
    printf("Enter Number of Elements: \n");
    scanf("%d", &n);

    // Declare array
    int arr[n];

    // Input array elements
    printf("Enter The Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Take first two elements as initial minimum pair
    int sum = arr[0] + arr[1];

    // Convert to absolute value
    if (sum < 0)
        sum = -sum;

    // Store initial minimum absolute sum
    int min = sum;

    // Store initial pair
    int a = arr[0], b = arr[1];

    // Check every possible pair
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Calculate sum of current pair
            int sum = arr[i] + arr[j];

            // Convert to absolute value
            if (sum < 0)
                sum = -sum;

            // If this pair is closer to zero than previous minimum
            if (sum < min)
            {
                min = sum;  // Update minimum
                a = arr[i]; // Store first number
                b = arr[j]; // Store second number
            }
        }
    }

    // Display OUtput
    printf("%d %d", a, b);

    return 0;
}