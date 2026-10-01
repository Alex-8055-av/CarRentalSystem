#include <stdio.h>
int main() { 
    int i, j, n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d ", &matrix[i][j]);
        
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d \n ", matrix[i][j]);
        
    } }
    
    printf(" %d",matrix[0][0]+matrix[1][1]);
   
   /* for(i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];               // Main diagonal: row == col
        //secondaryDiagonalSum += matrix[i][n - i - 1];  // Secondary diagonal: row + col == n - 1
    }
    // Output results 
    printf("Sum of main diagonal = %d\n", mainDiagonalSum);
    //printf("Sum of secondary diagonal = %d\n", secondaryDiagonalSum);*/
    return 0;
}
