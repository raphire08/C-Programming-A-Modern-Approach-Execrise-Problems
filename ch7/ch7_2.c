#include <stdio.h>

int main()
{
    int i, n;
    int j = 1;
    int loopCount = 24;
    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    while (1)
    {
        scanf("%d", &n);
        if (loopCount >= n) {
            loopCount = n;
        }
        for (i = j; i < j + loopCount; i++) {
            printf("%20d%20d\n", i, i * i);
        }
        if (loopCount == n) {
            break;
        } else {
            printf("Press ENTER to continue... ");
            while (1) {
                char c = getchar();
                if (c == 10) {
                    break;
                }
            }
        }
        j += loopCount;
        n -= loopCount;
    }
}