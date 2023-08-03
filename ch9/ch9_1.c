#include <stdio.h>

void selectionSortArray(int array[], int size) {
    if (size == 1) {
        return;
    }
    int largest = array[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
            index = i;
        }
    }
    int temp = array[size - 1];
    array[size - 1] = array[index];
    array[index] = temp;
    selectionSortArray(array, size - 1);
}

int main() {
    int size = 0;

    printf("Enter count of integers: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    selectionSortArray(array, size);

    printf("Sorted Array: \n");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
}