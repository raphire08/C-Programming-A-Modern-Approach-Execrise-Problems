#include <stdio.h>

int amount_left(int amount, int bill_value, int bill_count) {
    return amount - (bill_value * bill_count);
}

int main() {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int bills_20 = amount / 20;
    amount = amount_left(amount, 20, bills_20);
    int bills_10 = amount / 10;
    amount = amount_left(amount, 10, bills_10);
    int bills_5 = amount / 5;
    amount = amount_left(amount, 5, bills_5);
    int bills_1 = amount ;

    printf("$20 bills: %d \n", bills_20);
    printf("$10 bills: %d \n", bills_10);
    printf("$5 bills: %d \n", bills_5);
    printf("$1 bills: %d \n", bills_1);

    return 0;
}


