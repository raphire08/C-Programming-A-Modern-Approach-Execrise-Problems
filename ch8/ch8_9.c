#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 10

int canMoveUp(char matrix[GRID_SIZE][GRID_SIZE], int currRow, int currColumn) {
    if (currRow - 1 >= 0 && matrix[currRow - 1][currColumn] == '.') {
        return 1;
    }
    return 0;
}

int canMoveRight(char matrix[GRID_SIZE][GRID_SIZE], int currRow, int currColumn) {
    if (currColumn + 1 <= GRID_SIZE - 1 && matrix[currRow][currColumn + 1] == '.') {
        return 1;
    }
    return 0;
}

int canMoveDown(char matrix[GRID_SIZE][GRID_SIZE], int currRow, int currColumn) {
    if (currRow + 1 <= GRID_SIZE - 1 && matrix[currRow + 1][currColumn] == '.') {
        return 1;
    }
    return 0;
}

int canMoveLeft(char matrix[GRID_SIZE][GRID_SIZE], int currRow, int currColumn) {
    if (currColumn - 1 >= 0 && matrix[currRow][currColumn - 1] == '.') {
        return 1;
    }
    return 0;
}

int getNextMove(char matrix[GRID_SIZE][GRID_SIZE], int currRow, int currColumn, char ch) {
    if (canMoveUp(matrix, currRow, currColumn)) {
        matrix[currRow - 1][currColumn] = ch;
        return 0;
    } else if (canMoveRight(matrix, currRow, currColumn)) {
        matrix[currRow][currColumn + 1] = ch;
        return 1;
    } else if (canMoveDown(matrix, currRow, currColumn)) {
        matrix[currRow + 1][currColumn] = ch;
        return 2;
    } else if (canMoveLeft(matrix, currRow, currColumn)) {
        matrix[currRow][currColumn - 1] = ch;
        return 3;
    } else {
        return -1;
    }
    return 1;
}


int main() {
    // 0 is up, 1 is right, 2 is down, 3 is left

    char matrix[GRID_SIZE][GRID_SIZE];
    int i;
    int direction;
    int currRow = 0;
    int currColumn = 0;

    srand((unsigned)time(NULL));


    for (i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            matrix[i][j] = '.';
        }
    }
    matrix[0][0] = 'A';
    for (char j = 'B'; j <= 'Z'; j++) {
        direction = rand() % 4;
        int moved = 0;
        if (direction == 0) {
            if (canMoveUp(matrix, currRow, currColumn)) {
                matrix[currRow - 1][currColumn] = j;
                currRow -= 1;
                moved = 1;
            }
        } else if (direction == 1) {
            if (canMoveRight(matrix, currRow, currColumn)) {
                matrix[currRow][currColumn + 1] = j;
                currColumn += 1;
                moved = 1;
            }
        } else if (direction == 2) {
            if (canMoveDown(matrix, currRow, currColumn)) {
                matrix[currRow + 1][currColumn] = j;
                currRow += 1;
                moved = 1;
            }
        } else {
            if (canMoveLeft(matrix, currRow, currColumn)) {
                matrix[currRow][currColumn - 1] = j;
                currColumn -= 1;
                moved = 1;
            }
        }

        if (!moved) {
            int nextMove = getNextMove(matrix, currRow, currColumn, j);
            if (nextMove == -1) {
                break;
            } else if (nextMove == 0) {
                currRow -= 1;
            } else if (nextMove == 1) {
                currColumn += 1;
            } else if (nextMove == 2) {
                currRow += 1;
            } else {
                currColumn -= 1;
            }
        }
    }

    for (i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf(" %c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}