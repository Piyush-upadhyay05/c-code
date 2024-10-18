#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");  // Added a colon and space for clarity
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);  // Added newline character
    }
    return 0;
}