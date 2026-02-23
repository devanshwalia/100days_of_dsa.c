#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n <= 0) return 0;

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer method
    int k = 1;  // position for next unique element

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[k - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    // Print only unique elements
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
