#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);
void reverse_name(char* name);

int main() {
    char word[100];

    printf("Enter a first name and a last name: ");
    read_line(word, 100);
    reverse_name(word);
    printf("%s\n", word);
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

void reverse_name(char* name) {
    char* origin = name;
    char first_name[100];
    char last_name[100];
    int i, j;
    while (*name++ == ' ');
    name--;
    while (*name != ' ') {
        first_name[i] = *name;
        name++;
        i++;
    }
    first_name[i] = '\0';
    while (*name++ == ' ');
    name--;
    while (*name != '\0') {
        last_name[j] = *name;
        name++;
        j++;
    }
    last_name[j] = '\0';
    name = origin;
    for (int k = 0; k < j; k++) {
        if (last_name[k] != ' ') {
            *name++ = last_name[k];
        }
    }
    *name++ = ',';
    *name++ = ' ';
    *name++ = first_name[0];
    *name++ = '.';
    *name = '\0';
}