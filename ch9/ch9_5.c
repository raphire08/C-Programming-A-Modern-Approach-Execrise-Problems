#include <stdio.h>

void create_magic_square(int n, int matrix[n][n]) {
    int currRow = 0;
    int currColumn = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    matrix[currRow][currColumn] = 1;
    for (int i = 2; i <= (n * n); i++) {
        int newRow = currRow - 1;
        if (newRow < 0) {
            newRow = newRow + n;
        }
        int newColumn = currColumn + 1;
        if (newColumn > n - 1) {
            newColumn = newColumn - n;
        }
        if (matrix[newRow][newColumn] == 0) {
            matrix[newRow][newColumn] = i;
            currRow = newRow;
            currColumn = newColumn;
        } else {
            matrix[currRow + 1][currColumn] = i;
            currRow++;
        }
    }
}

void print_magic_square(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main() {
    int n;
    printf("This program creates a magic square.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter the size of magic square: ");
    scanf("%d", &n);

    int matrix[n][n];

    create_magic_square(n, matrix);

    print_magic_square(n, matrix);
}