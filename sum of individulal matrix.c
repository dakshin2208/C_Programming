 #include<stdio.h>

int main() {
    int arr[3][3], i, j, sumofrow, sumofcolumn;
    
    // Taking input for the matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter the value for matrix: ");
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Displaying the matrix
    printf("Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    // Calculating and displaying sum of each row and column
    for(i = 0; i < 3; i++) {
        sumofrow = sumofcolumn = 0; // resetting sum for each row and column
        for(j = 0; j < 3; j++) {
            sumofrow += arr[i][j];
            sumofcolumn += arr[j][i];
        }
        printf("\nSum of row %d = %d, Sum of column %d = %d", i+1, sumofrow, i+1, sumofcolumn);
    }
    
    return 0;
}

