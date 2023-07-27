#include <stdio.h>

int main() {
    float loan, rate, emi;
    int n;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &emi);
    printf("Enter number of payments: ");
    scanf("%d", &n);
    float balance = loan;
    for (int i = 1; i <= n; i++) {
        balance = balance + (balance * (rate / 12.0f) * 0.01f) - emi;
        if (balance > 0) {
            printf("Balance remaining after %d payments: %.2f \n", i, balance);
        } else {
            printf("Loan repayed stop paying EMI \n");
        }
    }
}