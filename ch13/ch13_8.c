#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char* word);

int main() {
    char str[100];
    int i;
    printf("Enter a word: ");
    while (1) {
        int ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            str[i++] = toupper(ch);
        }
    }
    str[i] = '\0';
    int sum = compute_scrabble_value(str);
    printf("Scrabble value: %d\n", sum);
}

int compute_scrabble_value(const char* word) {
    int sum = 0;
    while (*word != '\0') {
        switch (*word) {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default:
                sum += 0;
        }
        word++;
    }
    return sum;
}