#include <stdio.h>

int main() {
    int number, date, month, year;
    float price;
    printf("Enter the item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
    printf("%-d\t$%7.2f\t%d/%d/%d \n", number, price, month, date, year);

}