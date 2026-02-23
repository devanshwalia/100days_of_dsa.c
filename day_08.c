#include <stdio.h>

// Recursive power function
long long power(int a, int b) {
    if (b == 0) return 1;          // base case: a^0 = 1
    if (b < 0) return 1 / power(a, -b); // handle negative powers (optional)
    return a * power(a, b - 1);    // recursive step
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%lld\n", power(a, b));

    return 0;
}
