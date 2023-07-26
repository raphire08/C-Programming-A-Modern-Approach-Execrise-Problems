#include <stdio.h>


int main() {
    int num_shares;
    float share_price;
    float com;

    printf("Enter the number of shares sold: ");
    scanf("%d", &num_shares);

    printf("Enter the price of share: ");
    scanf("%f", &share_price);

    if(num_shares < 2000) {
        com = 33 + (0.03 * num_shares);
    } else {
        com = 33 + (0.02 * num_shares);
    }

    printf("The commission value is: %f \n", com);
}
