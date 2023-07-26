#include <stdio.h>

int main() {
    float loan, rate, emi;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &emi);
    float balance = loan + (loan * (rate / 12.0f) * 0.01f) - emi;
    printf("Balance remaining after first payment: %.2f \n", balance);
    balance = balance + (balance * (rate / 12.0f) * 0.01f) - emi; 
    printf("Balance remaining after second payment: %.2f \n", balance);
    balance = balance + (balance * (rate / 12.0f) * 0.01f) - emi; 
    printf("Balance remaining after third payment: %.2f \n", balance);
}