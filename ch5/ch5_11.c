#include <stdio.h>

int main() {
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    if(n > 99) {
        printf("Input should be two digit number");
    } else if(n >= 10 && n <= 19) {
        switch(n) {
            case 10: printf("Ten"); break;
            case 11: printf("Eleven"); break;
            case 12: printf("Twelve"); break;
            case 13: printf("Thirteen"); break;
            case 14: printf("Fourteen"); break;
            case 15: printf("Fifteen"); break;
            case 16: printf("Sixteen"); break;
            case 17: printf("Seventeen"); break;
            case 18: printf("Eighteen"); break;
            case 19: printf("Nineteen"); break;
        }
    } 
    else {
         printf("You entered the number ");
        int tens = n / 10;
        int ones = n % 10;
        switch(tens) {
            case 0: break;
            case 1: break;
            case 2: printf("Twenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Fourty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }
        switch(ones) {
            case 0: break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    }
    printf("\n");
}