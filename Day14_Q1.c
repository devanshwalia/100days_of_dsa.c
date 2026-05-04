// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

// Input:
// - First line: integer n representing number of rows and columns
// - Next n lines: n integers each representing the matrix elements

// Output:
// - Print "Identity Matrix" if the matrix satisfies the condition
// - Otherwise, print "Not an Identity Matrix"

// Example:
// Input:
// 3
// 1 0 0
// 0 1 0
// 0 0 1

// Output:
// Identity Matrix
#include <stdio.h>

int main()
{
    int a, Identity = 1; // Declare Varaibles

    // Take Input from User
    printf("Enter No. of Rows and Columns: \n");
    scanf("%d", &a);

    int arr[a][a]; // Declare Array

    // Input the matrix
    printf("Input the Matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check identity condition
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {

            if (i == j)
            {
                // Diagonal elements must be 1
                if (arr[i][j] != 1)
                {
                    Identity = 0;
                }
            }
            else
            {
                // Non-diagonal elements must be 0
                if (arr[i][j] != 0)
                {
                    Identity = 0;
                }
            }
        }
    }

    // Output result
    if (Identity == 1)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not an Identity Matrix");
    }

    return 0;
}
