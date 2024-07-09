#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 4, 9, 12, 13}; // Example array of odd numbers
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int i;

    printf("Even indices with odd numbers:\n");
    for (i = 0; i < arr[i]; i += 2) { // Iterate through even indices
        printf("Index %d: %d\n", i, arr[i]); // Print the even index and its corresponding value
    }

    return 0;
}
