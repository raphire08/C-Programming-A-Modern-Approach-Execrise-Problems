#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("Enter the number from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("\n%d   %d   %d   %d\n%d   %d   %d   %d\n%d   %d   %d   %d\n%d   %d   %d   %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    int row_r1 = a + b + c + d;
    int row_r2 = e + f + g + h;
    int row_r3 = i + j + k + l;
    int row_r4 = m + n + o + p;
    int column_c1 = a + e + i + m;
    int column_c2 = b + f + j + n;
    int column_c3 = c + g + k + o;
    int column_c4 = d + h + l + p;
    int diag_1 = a + f + k + p;
    int diag_2 = d + g + j + m;
    printf("Row sums: %d %d %d %d \n", row_r1, row_r2, row_r3, row_r4);
    printf("Column sums: %d %d %d %d \n", column_c1, column_c2, column_c3, column_c4);
    printf("Diagonal sums: %d %d \n", diag_1, diag_2);
}