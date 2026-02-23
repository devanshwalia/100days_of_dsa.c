#include <stdio.h>

int main() {
    int n, k, comparisons = 0;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    scanf("%d", &k);

    int found = 0;

    // Linear Search
    for(int i = 0; i < n; i++) {
        comparisons++;  // Count comparison

        if(arr[i] == k) {
            printf("Key found at position %d\n", i + 1); // 1-based position
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Key not found\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
