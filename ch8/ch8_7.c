#include <stdio.h>

#define SIZE 5

int main() {
    int i;
    int matrix[SIZE][SIZE];
    int rowTotals[SIZE] = { 0 };
    int columnTotals[SIZE] = { 0 };
    for (i = 0; i < SIZE; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
            rowTotals[i] += matrix[i][j];
            columnTotals[j] += matrix[i][j];
        }
    }
    printf("Row totals: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", rowTotals[i]);
    }
    printf("\nColumn totals: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", columnTotals[i]);
    }
    printf("\n");
}