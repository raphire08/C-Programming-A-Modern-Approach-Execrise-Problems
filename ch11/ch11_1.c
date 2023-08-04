#include <stdio.h>

int amount_left(int amount, int bill_value, int bill_count) {
    return amount - (bill_value * bill_count);
}

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {
    *twenties = dollars / 20;
    dollars = amount_left(dollars, 20, *twenties);
    *tens = dollars / 10;
    dollars = amount_left(dollars, 10, *tens);
    *fives = dollars / 5;
    dollars = amount_left(dollars, 5, *fives);
    *ones = dollars;
}

int main() {
    int amount;
    int twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    pay_amount(amount, &twenties, &tens, &fives, &ones);


    printf("$20 bills: %d \n", twenties);
    printf("$10 bills: %d \n", tens);
    printf("$5 bills: %d \n", fives);
    printf("$1 bills: %d \n", ones);

    return 0;
}


