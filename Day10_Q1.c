// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards
#include <stdio.h>
#include <string.h>

int main()
{
    // Declare character array
    char s[50];

    // Declare two pointers:
    int left = 0, right;

    // Take Input From User
    printf("Enter Your String:\n");
    fgets(s, sizeof(s), stdin);

    // Remove '\0' and \n character from fgets
    right = strlen(s) - 2;

    // Two-pointer comparison loop

    while (left < right)
    {
        // If characters at left and right do not match
        // then the string is NOT a palindrome
        if (s[left] != s[right])
        {
            printf("NO\n");
            return 0; // Exit program immediately
        }

        left++;

        right--;
    }

    // If all character comparisons matched
    printf("YES\n");

    return 0;
}
