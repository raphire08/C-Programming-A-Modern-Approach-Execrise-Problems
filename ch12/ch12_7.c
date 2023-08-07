# include <stdio.h>

#define N 10

void max_min(int* p, int* max, int* min);

int main(void) {
    int b[N], i, big, small;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }
    max_min(b, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    return 0;
}

void max_min(int* p, int* max, int* min) {
    *max = *min = *p;
    for (int* i = p; i < p + N; i++) {
        if (*i > *max) {
            *max = *i;
        } else if (*i < *min) {
            *min = *i;
        }
    }
}