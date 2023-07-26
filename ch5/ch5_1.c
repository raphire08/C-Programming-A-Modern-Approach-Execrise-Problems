 #include <stdio.h> 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int digits = 0;
    if(n<=9) {
        digits = 1;
    } else {
        if(n <= 99) {
            digits = 2;
        } else {
            if(n<= 999) {
                digits = 3;
            } else {
                if(n <= 9999) {
                    digits = 4;
                } else {
                    digits = 0;
                }
            }
        } 
    }
    printf("The number %d has %d digits \n", n, digits);
}