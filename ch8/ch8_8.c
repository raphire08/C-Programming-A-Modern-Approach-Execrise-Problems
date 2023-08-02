#include <stdio.h>

#define SIZE 3

int main() {
    int i;
    int matrix[SIZE][SIZE];
    int rowTotals[SIZE] = { 0 };
    int columnTotals[SIZE] = { 0 };
    int lowScore[SIZE];
    int highScore[SIZE];
    for (i = 0; i < SIZE; i++) {
        lowScore[i] = 100000;
        highScore[i] = -100000;
    }
    for (i = 0; i < SIZE; i++) {
        printf("Enter %d quiz grades for student %d: ", SIZE, i + 1);
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
            rowTotals[i] += matrix[i][j];
            columnTotals[j] += matrix[i][j];
            if (matrix[i][j] > highScore[j]) {
                highScore[j] = matrix[i][j];
            }
            if (matrix[i][j] < lowScore[j]) {
                lowScore[j] = matrix[i][j];
            }
        }
    }
    printf("Total scores for students: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", rowTotals[i]);
    }

    printf("\nAverage scores for students: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %.2f", rowTotals[i] / (SIZE * 1.0));
    }

    printf("\nAverage scores for Quiz: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %.2f", columnTotals[i] / (SIZE * 1.0));
    }

    printf("\nHigh scores for Quiz: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", highScore[i]);
    }

    printf("\nLow scores for Quiz: ");
    for (i = 0; i < SIZE; i++) {
        printf(" %d", lowScore[i]);
    }
    printf("\n");
}