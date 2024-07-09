#include <stdio.h>

int main() {
    int n, i, j, space;

    // Input the number of rows (must be odd) from the user
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    // Check if the input is odd
    if (n % 2 == 0) {
        printf("Number of rows must be odd.\n");
        return 1; // Exit the program with an error code
    }

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        // Print spaces
        for (space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        // Print spaces
        for (space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

