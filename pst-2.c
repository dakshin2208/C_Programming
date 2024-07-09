#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Reverse the first string
    j = 0;
    for (i = strlen(str1) - 1; i >= 0; i--) {
        concat[j] = str1[i];
        j++;
    }

    // Reverse the second string
    for (i = strlen(str2) - 1; i >= 0; i--) {
        concat[j] = str2[i];
        j++;
    }

    concat[j] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated reversed string: %s\n", concat);
    
}

