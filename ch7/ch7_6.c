#include <stdio.h>

int main() {
    int  a = 2;
    short int b = 3;
    long int c = 4;
    float d = 4;
    double e = 5;
    long double f = 6;
    printf("%lu \n", sizeof(a));
    printf("%lu \n", sizeof(b));
    printf("%lu \n", sizeof(c));
    printf("%lu \n", sizeof(d));
    printf("%lu \n", sizeof(e));
    printf("%lu \n", sizeof(f));
}