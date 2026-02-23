#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n - 1];
    int sum = 0;

    // Read n-1 elements
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected = n * (n + 1) / 2;
    int missing = expected - sum;

    printf("%d\n", missing);

    return 0;
}
