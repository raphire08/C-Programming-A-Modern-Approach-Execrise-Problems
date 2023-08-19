#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct Part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {
    char code;
    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n');
        switch (code) {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                return 0;
            default:
                printf("Iilegal code\n");
                break;
        }
        printf("\n");
    }
}

int find_part(int number) {
    int i;
    for (i = 0; i < num_parts; i++) {
        if (inventory[i].number == number) {
            return i;
        }
    }
    return -1;
}

void insert() {
    int part_number;
    if (num_parts == MAX_PARTS) {
        printf("Database is full; cannot add more parts\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number) > 0) {
        printf("Part already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search() {
    int i, number;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Part name %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else {
        printf("Part not found.\n");
    }
}

void update() {
    int i, number, change;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Enter the change in quantity: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else {
        printf("Part not found.\n");
    }
}

void print() {
    int i;

    for (i = 0; i < num_parts; i++) {
        int number = inventory[i].number;
        int index;
        for (int j = i; j < num_parts; j++) {
            if (inventory[j].number < number) {
                index = j;
            }
        }
        struct Part temp = inventory[i];
        inventory[i] = inventory[index];
        inventory[index] = temp;
    }
    printf("Part Number\tPart Name\tQuantity On Hand\n");
    for (i = 0; i < num_parts; i++) {
        printf("%7d\t%s\t%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}
