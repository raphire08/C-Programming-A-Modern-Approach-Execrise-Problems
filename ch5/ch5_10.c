#include <stdio.h>

int main() {
    int n;
    printf("Enter numerical grade: ");
    scanf("%d", &n);
    int tens = n / 10;
    if(tens > 11) {
        printf("Wrong input: \n");
    } else {
        switch(tens) {
            case 10: case 9: printf("A\n"); break;
            case 8: printf("B\n"); break;
            case 7: printf("C\n"); break;
            case 6: printf("D\n"); break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("F\n"); break;
        }
    }
}