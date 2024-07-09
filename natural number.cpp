 #include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

