#include <stdio.h>

#define NUM_RATES 4

int main() {
    double i;
    int N, j;
    double balance[NUM_RATES];
    int year;

    printf("Enter the interest rate: ");
    scanf("%lf", &i);
    printf("Enter the number of years: ");
    scanf("%d", &N);

    printf("Years");
    for (j = 0; j < NUM_RATES; j++) {
        printf("%8.2f %%", i + j);
        balance[j] = 100;
    }
    printf("\n");
    for (year = 1; year <= N; year++) {
        printf("%3d   ", year);
        for (j = 0; j < NUM_RATES; j++) {
            for (int k = 1; k <= 12; k++) {
                balance[j] += (balance[j] * ((i + j) / 1200));
            }
            printf("%9.2f ", balance[j]);
        }
        printf("\n");
    }

}