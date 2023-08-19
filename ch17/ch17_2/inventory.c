#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define INCREMENT 3

struct Part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

int find_part(int number, struct Part inventory[], int* num_parts);
void insert(struct Part inventory[], int* num_parts, int* capacity);
void search(struct Part inventory[], int* num_parts);
void update(struct Part inventory[], int* num_parts);
void print(struct Part inventory[], int* num_parts);
int compare_parts(const void* p, const void* q);

int main(void) {
    struct Part* inventory = malloc(sizeof(struct Part) * INCREMENT);

    int num_parts = 0;
    int capacity = INCREMENT;

    char code;
    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n');
        switch (code) {
            case 'i':
                insert(inventory, &num_parts, &capacity);
                break;
            case 's':
                search(inventory, &num_parts);
                break;
            case 'u':
                update(inventory, &num_parts);
                break;
            case 'p':
                print(inventory, &num_parts);
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

int find_part(int number, struct Part inventory[], int* num_parts) {
    int i;
    for (i = 0; i < *num_parts; i++) {
        if (inventory[i].number == number) {
            return i;
        }
    }
    return -1;
}

void insert(struct Part* inventory, int* num_parts, int* capacity) {
    int part_number;
    if (*num_parts == *capacity) {
        inventory = realloc(inventory, sizeof(struct Part) * INCREMENT);
        *capacity += INCREMENT;
        printf("Database full; increasing capacity to %d\n", *capacity);
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number, inventory, num_parts) > 0) {
        printf("Part already exists.\n");
        return;
    }

    inventory[*num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[*num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[*num_parts].on_hand);
    (*num_parts)++;
}

void search(struct Part inventory[], int* num_parts) {
    int i, number;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, inventory, num_parts);
    if (i >= 0) {
        printf("Part name %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else {
        printf("Part not found.\n");
    }
}

void update(struct Part inventory[], int* num_parts) {
    int i, number, change;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, inventory, num_parts);
    if (i >= 0) {
        printf("Enter the change in quantity: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else {
        printf("Part not found.\n");
    }
}

int compare_parts(const void* p, const void* q) {
    const struct Part* p1 = p;
    const struct Part* q1 = q;
    if (p1->number < q1->number) {
        return -1;
    } else if (p1->number > q1->number) {
        return 1;
    } else {
        return 0;
    }
}

void print(struct Part inventory[], int* num_parts) {
    int i;
    qsort(inventory, *num_parts, sizeof(struct Part), compare_parts);

    printf("Part Number\tPart Name\tQuantity On Hand\n");
    for (i = 0; i < *num_parts; i++) {
        printf("%d\t%10s\t%d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}
