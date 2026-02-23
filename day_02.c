#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce size after deletion

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
