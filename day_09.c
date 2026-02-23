#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // assuming max length 999
    scanf("%s", str);

    int n = strlen(str);

    // Reverse in-place
    for(int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}
