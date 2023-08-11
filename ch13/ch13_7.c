#include <stdio.h>

int main() {

    char* tensString[] = { "", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    char* onesString[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };

    char* array[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    if (n > 99) {
        printf("Input should be two digit number");
    } else if (n >= 10 && n <= 19) {
        printf("You entered the number ");
        printf("%s", array[n - 10]);
    } else {
        printf("You entered the number ");
        int tens = n / 10;
        int ones = n % 10;
        printf("%s ", tensString[tens]);

        printf("%s", onesString[ones]);
    }
    printf("\n");
}